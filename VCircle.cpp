#include "VCircle.h"

using namespace sf;
//using namespace gm;

/*
void GameObject::update(RenderWindow& window) {
	window.draw(*shape);
}
*/
void VCircle::update(RenderWindow& window) {
	//int randomMoveX = -3 + rand() % 7;
	int randomMoveY = -3 + rand() % 7;
	setPosition(Vector2f(getPosition().x, getPosition().y + randomMoveY));
}
