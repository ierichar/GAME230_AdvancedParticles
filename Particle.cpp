#include "Particle.h"

using namespace pe;

//*****************************************************************************
// Particle 
//*****************************************************************************
// Constructors & Deconstructors
Particle::Particle(Vector2f& initialPosition, 
	Vector2f& initialVelocity, const float lifespan) {

	this->position = initialPosition;
	this->velocity = initialVelocity;
	this->lifespan = lifespan;
	this->current_lifespan = lifespan;
}

/* Game Loop Functions */
void Particle::update() {
	// Test speed relative to framerate
	position += velocity;
	current_lifespan -= DECAY_RATE;
}

/* Accessors & Mutators */
Vector2f& Particle::getPosition() {
	return position;
}

Vector2f& Particle::getVelocity() {
	return velocity;
}

float Particle::getLifespan() const {
	return lifespan;
}

float Particle::getLifespanRemaining() const {
	return current_lifespan;
}

void Particle::setPosition(Vector2f& position) {
	this->position = position;
}

void Particle::setVelocity(Vector2f& velocity) {
	this->velocity = velocity;
}

void Particle::setLifeSpan(const float lifespan) {
	this->lifespan = lifespan;
}

/* Helper Functions */
bool Particle::isAlive() const {
	if (current_lifespan <= 0) {
		return false;
	}
	return true;
}

void Particle::setAlive() {
	current_lifespan = lifespan;
}
