#ifndef SHAPE_PARTICLE_H
#define SHAPE_PARTICLE_H

#include "Particle.h"

namespace pe {
	using namespace sf;

	class ShapeParticle : public Particle {
	private:
		Shape* shape;

	public:
		ShapeParticle(Vector2f&, Vector2f&, const float);
		~ShapeParticle();	// needs to delete contents of shape if dynamically 
							// allocated
		void update() {};
		virtual void render(RenderWindow&) = 0;
		inline Shape* GetShape() { return shape; }
	};
}

#endif 