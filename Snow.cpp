#include "Snow.h"

using namespace sf;
using namespace pe;

//we need this function to override the pure virtual otherwise it derives it from an abstract class which is not okay
void Snow::CreateParticle(const int index, const float x, const float y) {
	Vector2f temp;
	//shape.setPosition(x);
}


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