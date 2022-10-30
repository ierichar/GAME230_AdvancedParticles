#include "CircleParticle.h"
#include <iostream>
using namespace sf;
using namespace pe;


//#include <memory>
//*****************************************************************************
// CircleParticle
//*****************************************************************************

//const int, const float, const float, Particle**
//Vector2f& iP, Vector2f& iV, const float ls, const float radius
CircleParticle::CircleParticle(Vector2f& iP, Vector2f& iV, const float ls, const float radius, Color& newColor, const Uint8 newOpac) : ShapeParticle(iP, iV, ls, newColor, newOpac) {

	shape = new CircleShape(radius);

	this->radius = radius;
}

void CircleParticle::render(RenderWindow& window) {
	if (shape != nullptr) {
		window.draw(*shape);
	}
}

void CircleParticle::update() {
	ShapeParticle::update();
}

float CircleParticle::GetRadius() const {
	return radius;
}

void CircleParticle::setRadius(const float radius) {
	this->radius = radius;
}