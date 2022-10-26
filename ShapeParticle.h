
#ifndef SHAPE_PARTICLE_H
#define SHAPE_PARTICLE_H

#include "Particle.h"

namespace pe {
	class ShapeParticle : protected Particle {
	private:
		Shape* shape;

	public:
		ShapeParticle(const Vector2f&, const Vector2f&, const float, Shape&);
		~ShapeParticle();	// needs to delete contents of shape if dynamically 
							// allocated
		void update() {};
		virtual void render(RenderWindow&) = 0;
		inline Shape* GetShape() { return shape; }
	};
}

#endif 