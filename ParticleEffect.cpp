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

using namespace sf;

//*****************************************************************************
// ParticleEffect
//*****************************************************************************
ParticleEffect::ParticleEffect() {
	for (short i = 0; i < NUM_OF_PARTICLES; ++i) {
		particles[i] = nullptr;
	}
}

ParticleEffect::~ParticleEffect() {
	for (short i = 0; i < NUM_OF_PARTICLES; ++i) {
		delete particles[i];
		particles[i] = nullptr;
	}
}

void ParticleEffect::update() {
	for (short i = 0; i < NUM_OF_PARTICLES; ++i) {
		if (particles[i] != nullptr) {
			particles[i]->update();
			if (!(particles[i]->isAlive())) {
				delete particles[i];
				particles[i] = nullptr;
			}
		}
	}
}

void ParticleEffect::render(RenderWindow& window) {
	for (short i = 0; i < NUM_OF_PARTICLES; ++i) {
		if (particles[i] != nullptr)
			particles[i]->render(window);
	}
}

void ParticleEffect::Emit(const float x, const float y) {
	// Applies force to particles (start moving here)
	Vector2f temp, position;
	position.x = x;
	position.y = y;

	for (short i = 0; i < NUM_OF_PARTICLES; ++i) {
		// Random velocity
		temp.x = Random::Range(HI, LO, RAND_MAX);
		temp.y = Random::Range(HI, LO, RAND_MAX);

		// Random lifespan
		float rand_lifespan = Random::Range(10.f, 1.f);

		// Replace "Sprite" with "Circle" for basic circle shape
		this->AddParticle(i, particleType, position, rand_lifespan, temp);
	}
}

void ParticleEffect::AddParticle(short i, const std::string& str_shape,
	Vector2f& initialPosition, const float lifespan, Vector2f& initialVector) {

	// particles[i] = new Particle(str_shape, initialPosition, lifespan,
		// initialVector);
}

void ParticleEffect::ChangeParticle() {
	if (particleType == "Circle")
		particleType = "Sprite";
	else particleType == "Circle";
}
