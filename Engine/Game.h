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
    list<Tile*> tiles;
    list<Bullet*> bullets;
    list<char> tacts;
    Tile* pressedTile;
    Ego* ego;
    bool pause;
    bool firstPress;
    bool endGame;
    bool gameOn;
    int bmp;
    int nTact;
    int kDelay;
    list<char>::iterator currTact;
    Time oneTact;
    Time currTime;
    Clock deltaTime;
    void updateField();
    void startTacts();
    void setBullet(Tile *tile);

public:
    Game();
    void start();
    void setPause(bool flag);
    void draw(RenderWindow *window);
    void update();
    void tilePress(char key);
    list<Tile*>  *getTiles();
    list<char> *getTacts();
    int *getBmp();
    bool isEnded();
    bool isOn();
};


#endif //CONFESSIONPROJECT_GAME_H
