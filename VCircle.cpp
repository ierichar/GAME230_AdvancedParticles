#include "VCircle.h"

using namespace sf;
using namespace gm;

void GameObject::update(RenderWindow& window) {
	window.draw(*shape);
}
