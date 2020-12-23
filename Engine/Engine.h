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
#include "Generator.h"
#include "Game.h"
#include "KeyHandler.h"
#include <SFML/Graphics.hpp>
#include <list>



using namespace sf;

class Engine
{
private:
    RenderWindow renderWindow;
    Event event;
    Clock clock;
    Time deltaTime;
    Interface *interface;
    Generator *generator;
    Game *game;
    String windowState;
    void inputHandler();
    void update(float deltaTime);
    void draw();
    void eventHandler();
    void startGame();

public:
    Engine();
    void start();
};


#endif //CONFESSIONPROJECT_ENGINE_H
