//
// Created by yana on 23.12.2020.
//

#ifndef CONFESSIONPROJECT_MESSAGE_H
#define CONFESSIONPROJECT_MESSAGE_H

#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>
#include "Button.h"

using namespace sf;

class Message {
private:
    String content;
    String owner;
    Texture backTexture;
    Sprite backSprite;
    Texture texture;
    Sprite sprite;
    Button *next;
    Font font;
    Text text;
    Text title;
public:
    Message(String owner, String content);
    String clickHandler();
    void draw(RenderWindow *window);
    void update(Vector2i mousePos);
};


#endif //CONFESSIONPROJECT_MESSAGE_H
