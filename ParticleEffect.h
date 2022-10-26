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
#pragma once
#ifndef PARTICLE_EFFECT_H
#define PARTICLE_EFFECT_H

#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>
#include <SFML/System.hpp>
#include <SFML/OpenGL.hpp>
#include <SFML/Main.hpp>

// #include "Particle.h"

#define NUM_OF_PARTICLES 10
#define SHAPE_SPEED_RATE .25f
#define SPRITE_SPEED_RATE 1.75f

#define LO -0.5f
#define HI 0.5f

class ParticleEffect {
private:

	std::string particleType = "Circle"; // Only uses "Circle" and "Sprite"

	// Particle* particles[NUM_OF_PARTICLES];

public:
	// Constructors & Deconstructors

	/// <summary>
	/// Constructor for ParticleEffect that initializes the array of pointers
	/// to Particle objects.
	/// </summary>
	ParticleEffect();

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
	/// Takes two float points from mouse click input
	/// </summary>
	void Emit(const float, const float);

	/// <summary>
	/// Initializes each element of the particles array with given position, 
	/// a given string for shape, and
	/// </summary>
	void AddParticle(short, const std::string&, Vector2f&, const float,
		Vector2f&);

	/// <summary>
	/// Swap particle type between shape and texture
	/// </summary>
	void ChangeParticle();
};

#endif // ParticleEffect.h