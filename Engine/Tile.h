//
// Created by yana on 10/21/20.
//

#ifndef CONFESSIONPROJECT_TILE_H
#define CONFESSIONPROJECT_TILE_H
#pragma once
#include <SFML/Graphics.hpp>

using namespace sf;

class Tile {
private:
    Vector2f position;
    String state;
    Sprite sprite;
    Texture texture;
    char element;

public:
    Tile();
    void define(int x, int y, char element);
    void setState(String state);
    void draw(RenderWindow *window);
    Vector2f getPosition();
};


#endif //CONFESSIONPROJECT_TILE_H
