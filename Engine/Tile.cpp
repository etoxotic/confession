//
// Created by yana on 10/21/20.
//

//ПЛИТА - игровая единица

#include "Tile.h"

Tile::Tile(int x, int y, char el){
    element = el;
    pos.x=x; pos.y=y;
    setState("default");
    font.loadFromFile("../resources/fancy.ttf");
    letter.setFont(font);
    letter.setString(element);
    letter.setCharacterSize(50);
    letter.setPosition(pos.x+55, pos.y+15);
}

void Tile::setState(String state){
    state=state;
    Color color;
    if(state == "default"){
        color.r=0;color.g=119;color.b=255;
    }
    if(state=="pressed"){
        color.r=255;color.g=38;color.b=116;
    }
    if(state=="dangered"){
        color.r=255;color.g=132;color.b=38;
    }
    if(state=="saved"){
        color.r=0;color.g=255;color.b= 133;
    }
    if(state=="damaged"){
        color.r=255;color.g= 25;color.b= 0;
    }
    texture.loadFromFile(("../resources/"+state+"Tile.png").toAnsiString());
    letter.setFillColor(color);
    sprite.setTexture(texture);
    sprite.setPosition(pos);
}

void Tile::draw(RenderWindow *window){
    window->draw(sprite);
    window->draw(letter);
}

bool Tile::isElement(char key) {
    if(element == key)
        return true;
    return false;
}

Vector2f Tile::getPosition() {
    return pos;
}

char Tile::getElement() {
    return element;
}