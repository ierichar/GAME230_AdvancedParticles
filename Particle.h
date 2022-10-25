#ifndef PARTICLE_H
#define PARTICLE_H

#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>
#include <SFML/System.hpp>
#include <SFML/OpenGL.hpp>
#include <SFML/Main.hpp>

#include "Random.h"
using namespace sf;
#define DECAY_RATE 0.001f

class Particle {
private:
	Vector2f pos;
	Vector2f velocity;
	float lifespan;
	float current_lifespan;

public:
	Particle() { int x = 0; }
	/* Constructors& Deconstructors */ 
	Particle(const Vector2f&, const Vector2f&, const float);
	~Particle() {};

	/* Game Loop Functions */
	/// <summary>
	/// Update values of a particle (i.e. position, lifespan)
	/// </summary>
	void update();

	/// <summary>
	/// Check to make sure particle is not null.
	/// Render particle and draw to window.
	/// </summary>
	/// <param name=""></param>
	virtual void render(RenderWindow&) = 0;

	/* Accessors& Mutators */

	/// <summary>
	/// Return the position of the particle as a sf::Vector2f
	/// </summary>
	Vector2f& getPosition();

	Vector2f& getVelocity();

	float getLifespan() const;

	float getLifespanRemaining() const;

	void setPosition(const Vector2f&);

	void setVelocity(const Vector2f&);

	void setLifeSpan(const float);

	/* Helper Functions */

	/// <summary>
	/// Returns true if the lifespan is less than or equal to 0.
	/// Else return false.
	/// </summary>
	bool isAlive() const;

	/// <summary>
	/// Set the lifespan to a stored float value
	/// </summary>
	/// <param name=""></param>
	void setAlive();
};

class ShapeParticle : protected Particle {
private:
	Shape* shape;

public:
	using Particle :: Particle;
	~ShapeParticle();	// needs to delete contents of shape if dynamically 
						// allocated
	void update() {};
	virtual void render(RenderWindow&) = 0;
	inline Shape* GetShape() { return shape; }
};

class CircleParticle : public ShapeParticle {
private:
	float radius;

public:
	CircleParticle(const Vector2f&, const Vector2f&, const float, const float);
	~CircleParticle() {};
	void update() {};
	virtual void render(RenderWindow&);
	float GetRadius() const;
	void setRadius(const float);
};

#endif // !PARTICLE_H
