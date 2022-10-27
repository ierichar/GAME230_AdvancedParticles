#ifndef CIRCLE_PARTICLE_H
#define CIRCLE_PARTICLE_H

#include "ShapeParticle.h"

namespace pe {
	using namespace sf;

	class CircleParticle : public ShapeParticle {
	private:
		float radius;

	public:
		CircleParticle(Vector2f&, Vector2f&, const float, const float);
		~CircleParticle() {};
		void update() {};
		virtual void render(RenderWindow&);
		float GetRadius() const;
		void setRadius(const float);
	};
}

#endif 