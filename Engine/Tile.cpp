//
// Created by yana on 10/21/20.
//

//ПЛИТА - игровая единица

#include "Tile.h"

Tile::Tile(){
}

void Tile::define(int x, int y, char element){
    element = element;
    position.x=x; position.y=y;
    setState("default");
}

void Tile::setState(String state){
    state=state;
    if(state == "default")
        texture.loadFromFile("../resources/defaultTile.png");
    if(state=="pressed")
        texture.loadFromFile("../resources/pressedTile.png");
    if(state=="hit")
        texture.loadFromFile("../resources/hitTile.png");
    if(state=="collapsed")
        texture.loadFromFile("../resources/damagedTile.png");
    sprite.setTexture(texture);
    sprite.setPosition(position);
}

void Tile::draw(RenderWindow *window){
    window->draw(sprite);
}


Vector2f Tile::getPosition(){
    return position;
}