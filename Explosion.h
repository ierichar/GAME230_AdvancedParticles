#ifndef EXPLOSION_H
#define EXPLOSION_H

#include "ParticleEffect.h"

#define LO -0.5f
#define HI 0.5f

namespace pe {
	class Explosion : public ParticleEffect
	{
	public:
		Explosion(const int numOfParticles) : ParticleEffect(numOfParticles) {};

		void CreateParticle(const int, const float, const float, Particle**);
	};
}
#endif