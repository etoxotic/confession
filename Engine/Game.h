//
// Created by yana on 23.12.2020.
//

#ifndef CONFESSIONPROJECT_GAME_H
#define CONFESSIONPROJECT_GAME_H

#pragma once
#include "Tile.h"
#include "Bullet.h"
#include "Interface.h"
#include "Generator.h"
#include "Message.h"
#include <SFML/Graphics.hpp>
#include <list>

class Game {
private:
    list<Tile*> tiles;
    list<Bullet*> bullets;
    list<char> tacts;
    Tile* pressedTile;
    Generator *generator;
    bool pause;
    bool firstPress;
    bool endGame;
    bool gameOn;
    int bmp;
    int nTact;
    int kDelay;
    list<char>::iterator currTact;
    Time oneTact;
    Time currTime;
    Clock deltaTime;
    float karmaPoints;
    float deltaKarmaPoints;
    void updateField();
    void startTacts();
    void setBullet(Tile *tile);
    Message *message;
    int nMessage;
    bool messageShown;
    bool egoWon;
    bool egoLost;
    bool anotherShot;
    void messagesUpdate();
    Texture egoTexture;
    Sprite egoSprite;


public:
    Game();
    void start();
    void setPause(bool flag);
    void draw(RenderWindow *window);
    void update(Vector2i mousePos);
    void tilePress(char key);
    bool isEnded();
    bool isOn();
    bool isMessageShown();
    void messageHandler();
    void clickHandler();
    void setMessage(String owner, String content);


};


#endif //CONFESSIONPROJECT_GAME_H
