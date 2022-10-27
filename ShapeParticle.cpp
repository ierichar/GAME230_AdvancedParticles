
#include "ShapeParticle.h"

using namespace sf;
using namespace pe;

//*****************************************************************************
// ShapeParticle
//*****************************************************************************
ShapeParticle::ShapeParticle(Vector2f& iP, Vector2f& iV, const float ls) : Particle(iP, iV, ls) {
	//this->shape = shape;
}

ShapeParticle::~ShapeParticle() {
	//if (shape != nullptr)
	//	delete shape;using namespace pe;
}