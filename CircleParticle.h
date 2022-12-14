#ifndef CIRCLE_PARTICLE_H
#define CIRCLE_PARTICLE_H

#include "ShapeParticle.h"

namespace pe {
	using namespace sf;

	class CircleParticle : public ShapeParticle {
	private:
		float radius;

	public:
						//const int, const float, const float, Particle**
						//Vector2f&, Vector2f&, const float, const float
		CircleParticle(Vector2f&, Vector2f&, const float, const float, Color&, const Uint8);
		~CircleParticle() {};
		virtual void update();
		virtual void render(RenderWindow&);
		float GetRadius() const;
		void setRadius(const float);
	};
}

#endif 