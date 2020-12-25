//
// Created by yana on 21.12.2020.
//

#ifndef CONFESSIONPROJECT_INTERFACE_H
#define CONFESSIONPROJECT_INTERFACE_H

#pragma once
#include <SFML/Graphics.hpp>
#include "Button.h"
#include <list>


using namespace sf;

class Interface {
private:
    Sprite backgroundSprite;
    Texture backgroundTexture;
    Font fancyFont;
    Font basicFont;
    std::list<Button*> buttons;
    std::list<Text> titles;
    void setButton(int x, int y, String type, String text, String link);
    void setText(int x, int y, String type, String text);
public:
    Interface();
    void setState(String state);
    void message(int x, int y, String text);
    void draw(RenderWindow *window);
    void update(Vector2i mousePos);
    String clickHandler();
};


#endif //CONFESSIONPROJECT_INTERFACE_H
