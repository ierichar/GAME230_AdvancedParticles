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
CircleParticle::CircleParticle(Vector2f& iP, Vector2f& iV, const float ls, const float radius) : ShapeParticle(iP, iV, ls) {
	/*
	shared_ptr<Shape> shapeptr = GetShape();
	shared_ptr<CircleShape> circleShape;
	circleShape = dynamic_pointer_cast<CircleShape>(shapeptr);
	(*circleShape).setRadius(radius);
	*/
	Shape* newShape;
	CircleShape circleShape;
	newShape = GetShape();
	newShape = &circleShape;

	this->radius = radius;
	std::cout << "circle particle was constructed" << std::endl;
}

void CircleParticle::render(RenderWindow& window) {
	if (GetShape() != nullptr) {
		window.draw(*GetShape());
		std::cout << "ran render" << std::endl;
	}
}

float CircleParticle::GetRadius() const {
	return radius;
}

void CircleParticle::setRadius(const float radius) {
	this->radius = radius;
}