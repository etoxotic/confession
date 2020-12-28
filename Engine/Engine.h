//
// Created by yana on 10/21/20.
//

#ifndef CONFESSIONPROJECT_ENGINE_H
#define CONFESSIONPROJECT_ENGINE_H

#pragma once
#include "Tile.h"
#include "Bullet.h"
#include "Interface.h"
#include "Game.h"
#include "KeyHandler.h"
#include <SFML/Graphics.hpp>
#include <list>
#include <fstream>
#include <SFML/Audio.hpp>



using namespace sf;

class Engine
{
private:
    RenderWindow renderWindow;
    Event event;
    Interface *interface;
    Game *game;
    String windowState;
    Time updatePeriod;
    Clock clock;
    void inputHandler();
    void update();
    void draw();
    void eventHandler();
    void startGame();
    void playIntro();

public:
    Engine();
    void start();
};


#endif //CONFESSIONPROJECT_ENGINE_H
