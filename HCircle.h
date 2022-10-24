#ifndef HCIRCLE_H
#define HCIRCLE_H

#include "GameObject.h"

using namespace sf;

namespace gm {
    class HCircle :
        public GameObject
    {
        virtual void update(RenderWindow& window);
    };
}

#endif