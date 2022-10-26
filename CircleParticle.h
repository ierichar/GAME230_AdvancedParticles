
#ifndef CIRCLE_PARTICLE_H
#define CIRCLE_PARTICLE_H

#include "ShapeParticle.h"

namespace pe {
	class CircleParticle : public ShapeParticle {
	private:
		float radius;

	public:
		CircleParticle(const Vector2f&, const Vector2f&, const float, const float, Shape&);
		~CircleParticle() {};
		void update() {};
		virtual void render(RenderWindow&);
		float GetRadius() const;
		void setRadius(const float);
	};
}

#endif 