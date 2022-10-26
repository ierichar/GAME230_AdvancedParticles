
#include "ShapeParticle.h"

using namespace sf;
using namespace pe;

//*****************************************************************************
// ShapeParticle
//*****************************************************************************
ShapeParticle::ShapeParticle(Vector2f& iP, Vector2f& iV, const float ls, 
	CircleShape& circle) : Particle(iP, iV, ls) {
	shape = &circle;
}

ShapeParticle::~ShapeParticle() {
	//if (shape != nullptr)
	//	delete shape;using namespace pe;
}