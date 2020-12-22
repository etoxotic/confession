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


class Bullet {
private:
    Tile *tile;
    Vector2f position;
    Sprite sprite;
    Texture texture;
    CircleShape circle;
    int radius;
    int maxRadius;
    float radiusSpeed;
    float xspeed;
    float yspeed;
    bool collided;
public:
    Bullet();
    void define(int x, int y, Tile *tile, float speed);
    void update(float deltaTime);
    void draw(RenderWindow *window);
    bool isCollided();
    bool getCollided();
    CircleShape getCircle();
};


#endif //CONFESSIONPROJECT_BULLET_H
