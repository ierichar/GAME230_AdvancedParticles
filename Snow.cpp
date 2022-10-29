#include "Snow.h"

using namespace sf;
using namespace pe;

//we need this function to override the pure virtual otherwise it derives it from an abstract class which is not okay
void Snow::CreateParticle(const int i, const float x, const float y, Particle** passedParticle) {
	Vector2f pos;
	Vector2f velocity;
	velocity.x = 0.f;
	velocity.y = Random::Range(HI, LO, RAND_MAX);
	//temp.x = Random::Range(HI, LO, RAND_MAX);
	//temp.y = Random::Range(HI, LO, RAND_MAX);
	pos.x = Random::Range(x - 200.f, x + 200.f);
	pos.y = y;
	Color newColor = Color::White;
	Uint8 opacityChangeVal = Random::Range(1, 3);
	passedParticle[i] = new CircleParticle(pos, velocity, 5.f, 10.f, newColor, opacityChangeVal);
	//Vector2f& iP, Vector2f& iV, const float ls, const float radius, CircleShape& circle
	
	//shape.setPosition(temp);
}

/*
void Snow::CreateParticle(const int num, CircleShape& shape) {
	Vector2f temp;
	//shape.setPosition();

	for (short i = 0; i < NUM_OF_PARTICLES; ++i) {
		// Random velocity
		temp.x = Random::Range(HI, LO, RAND_MAX);
		temp.y = Random::Range(HI, LO, RAND_MAX);

		// Random lifespan
		float rand_lifespan = Random::Range(10.f, 1.f);
	}
}
*/