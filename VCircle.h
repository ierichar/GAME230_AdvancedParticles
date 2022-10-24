#ifndef VCIRCLE_H
#define VCIRCLE_H

#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>
#include <SFML/System.hpp>
#include <SFML/OpenGL.hpp>
#include <SFML/Main.hpp>

#include "GameObject.h"

class VCircle : public GameObject {
public:
	void update(sf::RenderWindow& window);
};

#endif