/**
* ParticleEffect.cpp
*
* Authors: Adam Carter, Ian Richardson
*
* The particle effect source file.
*/

#include "ParticleEffect.h"
#include "Random.h"

#include <iostream>

using namespace pe;

//*****************************************************************************
// ParticleEffect
//*****************************************************************************
ParticleEffect::ParticleEffect(const int numParticles) {
	this->numParticles = numParticles;
	particles = nullptr;
}

ParticleEffect::~ParticleEffect() {
	if (particles != nullptr)
		delete[] particles;
}

void ParticleEffect::update() {
	if (particles == nullptr)
		return;	// This is where error handling goes

	for (short i = 0; i < numParticles; ++i) {
		if (particles[i]->isAlive())
			particles[i]->update();
	}
}

void ParticleEffect::render(RenderWindow& window) {
	if (particles == nullptr)
		return; // This is where error handling goes

	for (short i = 0; i < numParticles; ++i) {
		if (particles[i]->isAlive())
			particles[i]->render(window);
	}
}

void ParticleEffect::CreateParticles(const float x, const float y) {

	particles = new Particle* [numParticles];

	for (int i = 0; i < numParticles; ++i) {
		CreateParticle(i, x, y, particles);
	}
}

void ParticleEffect::Emit(const float x, const float y) {
	CreateParticles(x, y);
}
