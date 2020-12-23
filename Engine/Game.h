//
// Created by yana on 23.12.2020.
//

#ifndef CONFESSIONPROJECT_GAME_H
#define CONFESSIONPROJECT_GAME_H

#pragma once
#include "Tile.h"
#include "Bullet.h"
#include "Ego.h"
#include "Interface.h"
#include "Generator.h"
#include <SFML/Graphics.hpp>
#include <list>

class Game {
private:
    std::list<Tile*> tiles;
    Tile* pressedTile;
    bool firstPress;
public:
    Game();
    void start();
    void draw(RenderWindow *window);
    void update();
    void tilePress(char key);
    std::list<Tile*>  *getTiles();
};


#endif //CONFESSIONPROJECT_GAME_H
