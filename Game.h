/**
* Game.h
*
* Authors: Adam Carter, Ian Richardson
*
* The Game class handles the Events from input, calls updates on the
* ParticleEffect object, and renders the ParticleEffect object to the
* window.
*/
#ifndef GAME_H
#define GAME_H

#include "ParticleEffect.h"
#include "Snow.h"
using namespace pe;

namespace gm {
	class Game {

	public:
		/// <summary>
		/// This function takes the Render Window, an Event, and a ParticleEffect
		/// object.
		/// Controls:
		///		LMB - generate particle effect,
		///		close - close window
		/// </summary>
		void handleInput(RenderWindow& window, Event e, Snow& PE);

		/// <summary>
		/// Updates every tick
		/// </summary>
		/// <param name="PE"></param>
		void update(Snow& PE);

		/// <summary>
		/// Clears the current window, renders the contents of the
		/// particle effect object, and displays what is drawn
		/// </summary>
		/// <param name="window"></param>
		/// <param name="PE"></param>
		void render(RenderWindow& window, Snow& PE);
	};
}

#endif // Game.h