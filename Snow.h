#ifndef SNOW_H
#define SNOW_H

#include "ParticleEffect.h"

#define LO 0.1f
#define HI 0.5f

namespace pe {
	class Snow : public ParticleEffect {
	private:
	public:
		//Snow() : ParticleEffect(NUM_OF_PARTICLES) {};
		Snow(const int numOfParticles) : ParticleEffect(numOfParticles) {};

		void CreateParticle(const int, const float, const float, Particle**);	//test function to see if its an issue with it not getting overriden

		//void CreateParticle(const int, CircleShape&);
	};
}

#endif // !SNOW_H
