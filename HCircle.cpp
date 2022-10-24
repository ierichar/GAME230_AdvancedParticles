#include "HCircle.h"

using namespace sf;

//only moves up and down
void HCircle::update(RenderWindow& window) {
	int randomMoveX = -3 + rand() % 7;
	//int randomMoveY = -3 + rand() % 7;
	setPosition(Vector2f(getPosition().x + randomMoveX, getPosition().y));
}