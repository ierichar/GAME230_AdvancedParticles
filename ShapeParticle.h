#ifndef SHAPE_PARTICLE_H
#define SHAPE_PARTICLE_H
//#include <stdlib.h>
#include "Particle.h"
using namespace std;

namespace pe {
	using namespace sf;

	class ShapeParticle : public Particle {
	private:
		

	public:
		Shape* shape;
		Color color;
		Uint8 opacity;
		ShapeParticle(Vector2f&, Vector2f&, const float, Color&, const Uint8);
		~ShapeParticle();	// needs to delete contents of shape if dynamically 
							// allocated
		virtual void update();
		virtual void render(RenderWindow&) = 0;
		inline Shape* GetShape() { return shape; }
	};
}

#endif 