#ifndef FIRE_H
#define FIRE_H

#include "ParticleEffect.h"

#define LO -0.1f
#define HI -0.5f
namespace pe {
	class Fire : public ParticleEffect
	{
	public:
		//Snow() : ParticleEffect(NUM_OF_PARTICLES) {};
		Fire(const int numOfParticles) : ParticleEffect(numOfParticles) {};

		void CreateParticle(const int, const float, const float, Particle**);
	};
}
#endif