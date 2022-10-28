/**
* Game.h
*
* Authors: Adam Carter, Ian Richardson
*
* The source file for Game.cpp
*
*/
#include "Game.h"

using namespace gm;
using namespace sf;

/// <summary>
/// This function exclusively takes the window, an Event, and a 
/// ParticleEffect object
/// </summary>
void Game::handleInput(RenderWindow& window, Event e, Snow& PE) {
    if (e.type == Event::Closed)
        window.close();
    if (e.type == Event::MouseButtonPressed) {
        if (e.mouseButton.button == Mouse::Left) {
            PE.Emit(e.mouseButton.x, e.mouseButton.y);
        }
        if (e.mouseButton.button == Mouse::Right) {
            //PE.ChangeParticle();
        }
    }
}

void Game::update(Snow& PE) {
    PE.update();
}

void Game::render(RenderWindow& window, Snow& PE) {
    window.clear();
    PE.render(window);
    window.display();
}