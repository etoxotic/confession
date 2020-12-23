//
// Created by yana on 10/21/20.
//

#ifndef CONFESSIONPROJECT_TILE_H
#define CONFESSIONPROJECT_TILE_H
#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>

using namespace sf;

class Tile {
private:
    Vector2f pos;
    String state;
    Sprite sprite;
    Texture texture;
    Text letter;
    Font font;
    char element;

public:
    Tile(int x, int y, char element);
    void setState(String state);
    void draw(RenderWindow *window);
    bool isElement(char key);
    Vector2f getPosition();
    char getElement();
};


#endif //CONFESSIONPROJECT_TILE_H
