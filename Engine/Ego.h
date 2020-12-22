//
// Created by yana on 10/21/20.
//

#ifndef CONFESSIONPROJECT_EGO_H
#define CONFESSIONPROJECT_EGO_H


#pragma once
#include "Bullet.h"
#include "Tile.h"
#include <list>
#include <SFML/Graphics.hpp>


class Ego {
private:
    std::list <Bullet> bullets;
    Vector2f position;
    Sprite sprite;
    Texture texture;
    String state;
    int speed;
public:
    Ego();
    void setBullet(Tile *tile);
    void define(String state);
    void setState(String state);
    void update(float deltaTime);
    void draw(RenderWindow *window);
};


#endif //CONFESSIONPROJECT_EGO_H
