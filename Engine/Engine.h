//
// Created by yana on 10/21/20.
//

#ifndef CONFESSIONPROJECT_ENGINE_H
#define CONFESSIONPROJECT_ENGINE_H

#pragma once
#include "Tile.h"
#include "Bullet.h"
#include "Ego.h"
#include "Interface.h"
#include <SFML/Graphics.hpp>
#include <list>
#include <iostream>


using namespace sf;

class Engine
{
private:
    RenderWindow renderWindow;
    std::list<Tile> tiles;
    Event event;
    Clock clock;
    Time deltaTime;
    Interface interface;
    void inputHandler();
    void update(float deltaTime);
    void draw();
    void eventHandler();
    void setTile(int x, int y, char element);


public:
    Engine();
    void start();
};


#endif //CONFESSIONPROJECT_ENGINE_H
