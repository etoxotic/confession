//
// Created by yana on 10/21/20.
//

#ifndef CONFESSIONPROJECT_KARMA_H
#define CONFESSIONPROJECT_KARMA_H

#pragma once
#include "Tile.h"
#include "Bullet.h"
#include "Ego.h"
#include "Karma.h"
#include <SFML/Graphics.hpp>
#include <list>


using namespace sf;

class Karma
{
private:
    void update(float deltaTime);
public:
    Karma();
    String input(Event *event);
};

#endif //CONFESSIONPROJECT_KARMA_H
