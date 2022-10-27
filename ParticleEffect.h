/**
* ParticleEffect.h
*
* Authors: Adam Carter, Ian Richardson
*
* The Particle Effect class maintains the spawning and updating of multiple
* particles. Embedded in ParticleEffect is the Particle class which maintains
* a shape, velocity, lifespan, and color. Each particle maintains its own
* position and lifespan.
*
* Each particle is dynamically allocated through the ParticleEffect when the
* AddParticle function is called via Emit. ParticleEffect checks if each
* particle is alive and handles their deletion.
*
*/
#ifndef PARTICLE_EFFECT_H
#define PARTICLE_EFFECT_H

#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>
#include <SFML/System.hpp>
#include <SFML/OpenGL.hpp>
#include <SFML/Main.hpp>

#include "Particle.h"

#define NUM_OF_PARTICLES 20
#define SHAPE_SPEED_RATE .25f
#define SPRITE_SPEED_RATE 1.75f

#define LO -0.5f
#define HI 0.5f

namespace pe {
	using namespace sf;

	class ParticleEffect {
	private:
		Particle* particles;
		int numParticles;
	public:
		// Constructors & Deconstructors

		/// <summary>
		/// Constructor for ParticleEffect that initializes the array 
		/// of pointers to Particle objects.
		/// </summary>
		/// <param name="numParticles">Number of particles in effect</param>
		ParticleEffect(const int);

		/// <summary>
		/// Deconstructor by deleting all objects in the particle array.
		/// </summary>
		~ParticleEffect();

		// Game Loop Functions

		/// <summary>
		/// Call update on all particles that are not null.
		/// If the particle returns isAlive as false, delete the particle.
		/// </summary>
		void update();

		/// <summary>
		/// Call render on all particles that are not null.
		/// </summary>
		/// <param name=""></param>
		void render(RenderWindow&);

		// Helper Functions

		/// <summary>
		/// Creates all of the particles for a given effect
		/// </summary>
		/// <param name="x">X mouse position on window</param>
		/// <param name="y">Y mouse position on window</param>
		void CreateParticles(const float x, const float y);

		/// <summary>
		/// Create a single particle based on the class calling this method
		/// </summary>
		/// <param name="index">Index to particles array</param>
		/// <param name="x">X mouse position on window</param>
		/// <param name="y">Y mouse position on window</param>
		virtual void CreateParticle(const int index, 
			const float x, const float y, CircleShape& shape) = 0;

		/// <summary>
		/// Takes two float points from mouse click input and
		///	creates the particle effect
		/// </summary>
		/// <param name="x"></param>
		/// <param name="y"></param>
		void Emit(const float x, const float y);
	};
}

#endif // ParticleEffect.h