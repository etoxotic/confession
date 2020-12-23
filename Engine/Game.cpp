//
// Created by yana on 23.12.2020.
//

#include "Game.h"

Game::Game(){
    firstPress = false;
}


void Game::tilePress(char key) {
    if(firstPress)
        pressedTile->setState("default");
    else
        firstPress = true;
    for (Tile *tile : tiles) {
        if(tile->getElement() == key){
            tile->setState("pressed");
            pressedTile = tile;
        }
    }
}

void Game::update() {

}

void Game::draw(RenderWindow *window) {
    for (Tile *tile : tiles) {
        tile->draw(window);
    }
}

std::list<Tile*>  *Game::getTiles(){
    return &tiles;
};
