
#include "ShapeParticle.h"
#include <iostream>
using namespace sf;
using namespace pe;

//*****************************************************************************
// ShapeParticle
//*****************************************************************************
ShapeParticle::ShapeParticle(Vector2f& iP, Vector2f& iV, const float ls, Color& color, const Uint8 opacity) : Particle(iP, iV, ls) {
	//this->shape = shape;
	this->color = color;
	this->opacity = opacity;
}

void ShapeParticle::update() {
	Particle::update();
	shape->setPosition(getPosition());
	if (color.a > opacity) {
		Uint8 newAlpha = color.a - opacity;
		//std::cout << (int)newAlpha << std::endl;
		color = Color{ color.r, color.g, color.b, newAlpha };
		shape->setFillColor(color);
	}
}

ShapeParticle::~ShapeParticle() {
	//if (shape != nullptr)
	//	delete shape;using namespace pe;
}