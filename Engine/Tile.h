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
    String prevState;
    Sprite sprite;
    Texture texture;
    Text letter;
    Font font;
    char element;
    Clock clock;
    Color color;
    Time stateDelta;
    bool isDamaged;
    bool firstDeltaState;

public:
    Tile(int x, int y, char element);
    void setState(String state);
    void draw(RenderWindow *window);
    bool isElement(char key);
    bool isPressed();
    Vector2f getPosition();
    char getElement();
    String getPrevState();
    void update();
};


#endif //CONFESSIONPROJECT_TILE_H
