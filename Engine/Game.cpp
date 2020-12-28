//
// Created by yana on 23.12.2020.
//

#include "Game.h"

Game::Game(){
}

void Game::start(){
    firstPress = false;
    endGame = false;
    pause = true;
    gameOn=false;
    nTact=0;
    kDelay=3;
    karmaPoints = 100;
    deltaKarmaPoints = 20;
    tiles.clear();
    bullets.clear();
    tacts.clear();
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
        for (Bullet *bullet : bullets)
            bullet->update();

        for(Bullet *bullet : bullets) {
            if(bullet->isCollided()) {
                if(bullet->getTile()->isPressed()) {
                    bullet->getTile()->setState("saved");
                    karmaPoints+=deltaKarmaPoints;
                }
                else{
                    bullet->getTile()->setState("damaged");
                    karmaPoints-=deltaKarmaPoints;
                }
                bullets.remove(bullet);
                break;
            }
        }

        if(karmaPoints <= 0){
            endGame = true;
            pause = true;
            return;
        }

        if (currTime > oneTact){
            deltaTime.restart();
            currTact++;
            nTact++;
            currTime = seconds(0);
            if(currTact == tacts.end())
                endGame = true;
            updateField();
        }

        for (Tile *tile : tiles){
            tile->update();
            if(!tile->isPressed()){
                tile->setState(tile->getPrevState());
                bool flag = true;
                for(Bullet *bullet : bullets)
                    if(bullet->getTile() == tile)
                        flag = false;
                if(flag)
                    tile->setState("default");
            }
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

    RectangleShape rectangle(Vector2f(karmaPoints, 30));
    rectangle.setPosition(Vector2f(700 - karmaPoints, 10));
    window->draw(rectangle);
}

void Game::setPause(bool flag) {
    if(!endGame){
        pause = flag;
        for(Bullet *bullet : bullets)
            bullet->setPause(flag);

        if(!flag)
            deltaTime.restart();
    }

}


bool Game::isEnded() {
    return endGame;
}
bool Game::isOn(){
    return gameOn;
}