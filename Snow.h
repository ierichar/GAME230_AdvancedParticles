#ifndef SNOW_H
#define SNOW_H

#include "ParticleEffect.h"

namespace pe {
	class Snow : protected ParticleEffect {
	private:
	public:
		Snow() : ParticleEffect(NUM_OF_PARTICLES) {};

		virtual void CreateParticle(const int, CircleShape&) override;
	};
}

#endif // !SNOW_H
