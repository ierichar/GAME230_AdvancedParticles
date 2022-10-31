#include "Explosion.h"

using namespace sf;
using namespace pe;

//we need this function to override the pure virtual otherwise it derives it from an abstract class which is not okay
void Explosion::CreateParticle(const int i, const float x, const float y, Particle** passedParticle) {
	Vector2f pos;
	Vector2f velocity;
	velocity.x = Random::Range(HI, LO, RAND_MAX);
	velocity.y = Random::Range(HI, LO, RAND_MAX);
	//temp.x = Random::Range(HI, LO, RAND_MAX);
	//temp.y = Random::Range(HI, LO, RAND_MAX);
	pos.x = x-5.f;
	pos.y = y;
	int whichColor = Random::Range(0, 3);
	Color newColor;
	if (whichColor == 0) {
		newColor = Color::Yellow;
	}
	else if(whichColor == 1) {
		newColor = Color::Red;
	}
	else {
		newColor = Color::Magenta;
	}
	Uint8 opacityChangeVal = 1;
	passedParticle[i] = new CircleParticle(pos, velocity, 5.f, 10.f, newColor, opacityChangeVal);
	passedParticle[i]->setVelocityM(1);
	//shape.setPosition(temp);
}