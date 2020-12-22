//
// Created by yana on 22.12.2020.
//

#include "Button.h"
#include <iostream>

Button::Button(Vector2f position, String btype, String text, String blink){
    pos=position;
    type=btype;
    link = blink;
    if(type == "normal"){
        size.x = 300;
        size.y = 90;
        content.setPosition(pos.x+text.getSize()*30, pos.y+6);
        content.setCharacterSize(50);
    }
    if(type == "borderless"){
        size.x = text.getSize()*10;
        size.y = 35;
        content.setPosition(pos.x, pos.y);
        content.setCharacterSize(35);
    }
    font.loadFromFile("../resources/thin.ttf");
    content.setFont(font);
    content.setString(text);
}

void Button::update(float deltaTime, Vector2i mousePos)
{
    if(mousePos.x > pos.x && mousePos.x < pos.x+size.x && mousePos.y > pos.y && mousePos.y < pos.y+size.y){
        state = "captured";
        Color color(255, 38, 116);
        content.setFillColor(color);
    }
    else{
        state = "default";
        content.setFillColor(Color::White);
    }
    texture.loadFromFile(("../resources/"+state+type+"Button.png").toAnsiString());
    sprite.setTexture(texture);
    sprite.setPosition(pos);

}

void Button::draw(RenderWindow *window) {
    window->draw(sprite);
    window->draw(content);
}

String Button::clickHandler() {
    if(state != "captured")
        return "None";
    else
        return link;
}