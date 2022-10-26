
#include "ShapeParticle.h"

using namespace sf;
using namespace pe;

//*****************************************************************************
// ShapeParticle
//*****************************************************************************
ShapeParticle::ShapeParticle(const Vector2f& iP, const Vector2f& iV,
	const float ls, Shape& newShape) : Particle(iP, iV, ls) {
	shape = &newShape;
}
ShapeParticle::~ShapeParticle() {
	//if (shape != nullptr)
	//	delete shape;using namespace pe;
}