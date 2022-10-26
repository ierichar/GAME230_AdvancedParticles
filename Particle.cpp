#include "Particle.h"

using namespace sf;

//*****************************************************************************
// Particle 
//*****************************************************************************
// Constructors & Deconstructors
Particle::Particle(const Vector2f& initialPosition, 
	const Vector2f& initialVelocity, const float lifespan) {

	this->pos = initialPosition;
	this->velocity = initialVelocity;
	this->lifespan = lifespan;
	this->current_lifespan = lifespan;
}

/* Game Loop Functions */
void Particle::update() {
	pos = pos + velocity;

	// Test speed relative to framerate
	if (this->isAlive())
		current_lifespan -= DECAY_RATE;
}

/* Accessors & Mutators */
Vector2f& Particle::getPosition() {
	return pos;
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

void Particle::setPosition(const Vector2f& position) {
	this->pos = position;
}

void Particle::setVelocity(const Vector2f& velocity) {
	this->velocity = velocity;
}

void Particle::setLifeSpan(const float lifespan) {
	this->lifespan = lifespan;
}

/* Helper Functions */
bool Particle::isAlive() const {
	if (current_lifespan <= 0)
		return false;
	return true;
}

void Particle::setAlive() {
	current_lifespan = lifespan;
}


//*****************************************************************************
// ShapeParticle
//*****************************************************************************
ShapeParticle::ShapeParticle(const Vector2f& startPos, const Vector2f& startVel, const float lifespan, Shape& newShape) 
	: Particle(startPos, startVel, lifespan) {
	*shape = newShape;
}
ShapeParticle::~ShapeParticle() {
	if (shape != nullptr)
		delete shape;
}

//*****************************************************************************
// CircleParticle
//*****************************************************************************
CircleParticle::CircleParticle(const Vector2f& startPos, const Vector2f& startVel, const float lifespan, const float radius, Shape& newShape) 
	: ShapeParticle(startPos, startVel, lifespan, newShape) {
	Shape* shape_ptr;
	shape_ptr = new CircleShape(radius);
	//startPos, startVel, lifeSpan, radius
}

void CircleParticle::render(RenderWindow& window) {
	window.draw(*(GetShape()));
}

float CircleParticle::GetRadius() const {
	return radius;
}

void CircleParticle::setRadius(const float radius) {
	this->radius = radius;
}
