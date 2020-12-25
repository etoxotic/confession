//
// Created by yana on 10/21/20.
//

//ПУЛЯ - игровая единица

#include "Bullet.h"

Bullet::Bullet(Tile *_tile, Time speed){
    maxRadius = 10;
    radius = 1;
    circle.setFillColor(sf::Color::White);
    circle.setRadius(radius);
    collided = false;
//    texture.loadFromFile("../resources/bullet.png");
//    sprite.setTexture(texture);
    position.x=400;
    position.y=100;
    sprite.setPosition(position);
    tile = _tile;
    center.x = tile->getPosition().x+70;
    center.y = tile->getPosition().y+50;
    radiusSpeed = float(maxRadius-radius)/(speed.asSeconds());
    xspeed = ((center.x-position.x)/speed.asSeconds());
    yspeed = ((center.y-position.y)/speed.asSeconds());
    clock.restart();
    pause = false;
    deltaTime = seconds(0);
}

void Bullet::update(){
    deltaTime += clock.getElapsedTime();
    position.x+=xspeed*deltaTime.asSeconds();
    position.y+=yspeed*deltaTime.asSeconds();
    radius+=radiusSpeed*deltaTime.asSeconds();
    circle.setPosition(position);
    sprite.setPosition(position);
    circle.setRadius(radius);
    clock.restart();
    deltaTime = seconds(0);
}

void Bullet::draw(RenderWindow *window) {
    window->draw(sprite);
    window->draw(circle);
}


bool Bullet::isCollided(){
    if(position.y < center.y){
        return false;
    }else{
        collided = true;
        return true;
    }
}

void Bullet::setPause(bool _pause) {
    pause = _pause;
    if(pause)
        deltaTime = clock.getElapsedTime();
    if(!pause)
        clock.restart();
}

bool Bullet::getCollided() {
    return collided;
}

Tile* Bullet::getTile() {
    return tile;
}