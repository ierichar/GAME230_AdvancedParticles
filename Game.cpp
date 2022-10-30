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
void Game::handleInput(RenderWindow& window, Event e, int* whichEffect, Snow& PE, Explosion& explosionEffect) {
    
    if (e.type == Event::Closed)
        window.close();
    if (e.type == Event::MouseButtonPressed) {
        if (e.mouseButton.button == Mouse::Left && *whichEffect == 1) {
            PE.Emit(e.mouseButton.x, e.mouseButton.y);
        }
        if (e.mouseButton.button == Mouse::Left && *whichEffect == 2) {
            explosionEffect.Emit(e.mouseButton.x, e.mouseButton.y);
        }
    }
    if (e.type == Event::KeyReleased) {
        if (e.key.code == Keyboard::Num1) {
            *whichEffect = 1;
        }
        if (e.key.code == Keyboard::Num2) {
            *whichEffect = 2;
        }
    }
}

void Game::update(Snow& PE, Explosion& explosionEffect) {
    PE.update();
    explosionEffect.update();
}

void Game::render(RenderWindow& window, Snow& PE, Explosion& explosionEffect) {
    window.clear();
    PE.render(window);
    explosionEffect.render(window);
    window.display();
}