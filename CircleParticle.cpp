
#include "CircleParticle.h"

using namespace pe;
using namespace sf;


//*****************************************************************************
// CircleParticle
//*****************************************************************************
CircleParticle::CircleParticle(const Vector2f& iP, const Vector2f& iV,
	const float ls, const float radius, Shape& newShape) 
	: ShapeParticle(iP, iV, ls, newShape) {
	this->radius = radius;
}

void CircleParticle::render(RenderWindow& window) {
	// window.draw(*GetShape());
}

float CircleParticle::GetRadius() const {
	return radius;
}

void CircleParticle::setRadius(const float radius) {
	this->radius = radius;
}