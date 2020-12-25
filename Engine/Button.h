//
// Created by yana on 22.12.2020.
//

#ifndef CONFESSIONPROJECT_BUTTON_H
#define CONFESSIONPROJECT_BUTTON_H
#pragma once
#include <SFML/Graphics.hpp>


using namespace sf;

class Button {
private:
    Vector2f pos;
    Vector2f size;
    String state;
    String type;
    Sprite sprite;
    Texture texture;
    Text content;
    Font font;
    String link;

public:
    Button(Vector2f pos, String type, String t, String link);
    void draw(RenderWindow *window);
    void update(Vector2i mousePos);
    String clickHandler();
};

#endif //CONFESSIONPROJECT_BUTTON_H

