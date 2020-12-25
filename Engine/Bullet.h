//
// Created by yana on 10/21/20.
//

//ПУЛЯ - игровая единица

#ifndef CONFESSIONPROJECT_BULLET_H
#define CONFESSIONPROJECT_BULLET_H

#pragma once
#include <SFML/Graphics.hpp>
#include "Tile.h"
#include <cmath>
#include <iostream>

using namespace std;


class Bullet {
private:
    Tile *tile;
    Vector2f position;
    Vector2f center;
    Sprite sprite;
    Texture texture;
    CircleShape circle;
    Clock clock;
    Time deltaTime;
    float radius;
    float maxRadius;
    float radiusSpeed;
    float xspeed;
    float yspeed;
    bool collided;
    bool pause;
public:
    Bullet(Tile *tile, Time tact);
    void update();
    void draw(RenderWindow *window);
    bool isCollided();
    bool getCollided();
    Tile* getTile();
    void setPause(bool _pause);
};


#endif //CONFESSIONPROJECT_BULLET_H
