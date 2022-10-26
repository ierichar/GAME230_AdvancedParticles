#include "CircleParticle.h"

using namespace sf;
using namespace pe;

//*****************************************************************************
// CircleParticle
//*****************************************************************************
CircleParticle::CircleParticle(Vector2f& iP, Vector2f& iV,
	const float ls, const float radius, CircleShape& circle) 
	: ShapeParticle(iP, iV, ls, circle) {
	this->radius = radius;
	
}

void CircleParticle::render(RenderWindow& window) {
	window.draw(GetShape());
}

float CircleParticle::GetRadius() const {
	return radius;
}

void CircleParticle::setRadius(const float radius) {
	this->radius = radius;
}