#include "Fire.h"
using namespace sf;
using namespace pe;

void Fire::CreateParticle(const int i, const float x, const float y, Particle** passedParticle) {
	Vector2f pos;
	Vector2f velocity;
	velocity.x = Random::Range(-.3f, .3f);
	velocity.y = Random::Range(HI, LO, RAND_MAX);
	//temp.x = Random::Range(HI, LO, RAND_MAX);
	//temp.y = Random::Range(HI, LO, RAND_MAX);
	pos.x = x;
	pos.y = y;
	Color newColor = Color::Red;
	Uint8 opacityChangeVal = Random::Range(1, 3);
	passedParticle[i] = new CircleParticle(pos, velocity, 5.f, 10.f, newColor, opacityChangeVal);
	passedParticle[i]->setVelocityM(1.1f);
	//shape.setPosition(temp);
}