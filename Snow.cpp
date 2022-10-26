#include "Snow.h"

using namespace sf;
using namespace pe;

void Snow::CreateParticle(const int , CircleShape&) {
	Vector2f temp;

	for (short i = 0; i < NUM_OF_PARTICLES; ++i)
		// Random velocity
		temp.x = Random::Range(HI, LO, RAND_MAX);
		temp.y = Random::Range(HI, LO, RAND_MAX);

		// Random lifespan
		float rand_lifespan = Random::Range(10.f, 1.f);
}