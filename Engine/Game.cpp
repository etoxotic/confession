//
// Created by yana on 23.12.2020.
//

#include "Game.h"

Game::Game(){
    firstPress = false;
    endGame = false;
    pause = true;
    gameOn=false;
    nTact=0;
    kDelay=3;
}

void Game::start(){
    generator = new Generator(0,&tiles,&tacts,&bmp);
    startTacts();
}

void Game::startTacts(){
    nTact=1;
    gameOn = true;
    pause = false;
    currTact = tacts.begin();
    oneTact = seconds(60/float(bmp));
    deltaTime.restart();
    currTime = seconds(0);
    updateField();
};


void Game::tilePress(char key) {
    if(!pause){
        if(firstPress)
            pressedTile->setState(pressedTile->getPrevState());
        else
            firstPress = true;
        for (Tile *tile : tiles) {
            if(tile->getElement() == key){
                tile->setState("pressed");
                pressedTile = tile;
            }
        }
    }
}

void Game::update() {
    if(!pause){
        currTime += deltaTime.getElapsedTime();
        for (Bullet *bullet : bullets) {
            bullet->update();
            if(bullet->isCollided()){
                bullet->getTile()->setState("damaged");
            }
        }
        Bullet *deleteBullet;
        bool deleteFlag = false;
        for(Bullet *bullet : bullets){
            if(bullet->getCollided()){
                bullet->getTile()->setState(bullet->getTile()->getPrevState());
                deleteBullet = bullet;
                deleteFlag = true;
            }
        }
        if (deleteFlag)
            bullets.remove(deleteBullet);

        if (currTime > oneTact){
            deltaTime.restart();
            currTact++;
            nTact++;
            currTime = seconds(0);
            if(currTact == tacts.end())
                endGame = true;
            updateField();
        }

    }
}

void Game::updateField() {
    for (Tile *tile : tiles) {
        if(tile->getElement() == *currTact){
            tile->setState("dangered");
            setBullet(tile);
        }
    }
}

void Game::setBullet(Tile *tile) {
    tile->setState("dangered");
    Bullet *tempbullet = new Bullet(tile, seconds(kDelay*oneTact.asSeconds()));
    bullets.push_back(tempbullet);
}

void Game::draw(RenderWindow *window) {
    for (Bullet *bullet : bullets) {
        bullet->draw(window);
    }
    for (Tile *tile : tiles) {
        tile->draw(window);
    }
}

void Game::setPause(bool flag) {
    pause = flag;
    for(Bullet *bullet : bullets)
        bullet->setPause(flag);

    if(!flag)
        deltaTime.restart();
}


bool Game::isEnded() {
    return endGame;
}
bool Game::isOn(){
    return gameOn;
}