//
// Created by jakub on 01.11.2019.
//

#include "../../headers/updaters/ColorUpdater.h"

void ColorUpdater::update(double dt, Container *p) {
    size_t endId = p-> countAlive;
    float timeDelta = (float) dt / 10000;
    glm::vec3 maxRGB =  {256,256,256};
    for (size_t i = 0; i < endId; i++) {
        p->color[i] = maxRGB - p->acceleration[i];
    }
}
