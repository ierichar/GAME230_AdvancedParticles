#ifndef SNOW_H
#define SNOW_H

#include "ParticleEffect.h"

namespace pe {
	class Snow : public ParticleEffect {
	private:
	public:
		Snow() : ParticleEffect(NUM_OF_PARTICLES) {};

		void CreateParticle(const int, CircleShape&);
	};
}

#endif // !SNOW_H
