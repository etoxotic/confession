//
// Created by yana on 10/21/20.
//

//ЭГО отвечает за машину, здесь считывание и установка уровня, генерация пуль
//LEVEL MANAGEMENT

#include "Ego.h"


Ego::Ego(){
    position.x=120;position.y=120;
    sprite.setPosition(position);
}

void Ego::define(String state) {
    setState(state);
}

void Ego::setState(String state) {
    state = state;
    if (state == "basic")
        texture.loadFromFile("../resources/test/basicKarma.png");
    sprite.setTexture(texture);
}

void Ego::update(float deltaTime) {
    //
}

void Ego::draw(RenderWindow *window) {
    window->draw(sprite);
}