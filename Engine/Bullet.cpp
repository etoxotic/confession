//
// Created by yana on 10/21/20.
//

//ПУЛЯ - игровая единица

#include "Bullet.h"

Bullet::Bullet(){
    maxRadius = 10;
    radius = 1;
    circle.setFillColor(sf::Color(100, 250, 50));
    circle.setRadius(radius);
    collided = false;
    texture.loadFromFile("../resources/bullet.png");
    sprite.setTexture(texture);
}
void Bullet::define(int x, int y, Tile *tile, float speed) {
    position.x=x;position.y=y;
    sprite.setPosition(position);
    tile = tile;
    float length = sqrt(pow(float(tile->getPosition().x-position.x), 2)+pow(float(tile->getPosition().y-position.y), 2));
    radiusSpeed = float(maxRadius-radius)/(length/speed);
    float alpha = atan((float(tile->getPosition().x-position.x)/float(tile->getPosition().y-position.y)));
    xspeed = speed*sin(alpha);
    yspeed = speed*cos(alpha);
}

void Bullet::update(float deltaTime){
    position.x+=round(xspeed*deltaTime);
    position.y+=round(yspeed*deltaTime);
    radius+=round(radiusSpeed*deltaTime);
    circle.setPosition(position);
    sprite.setPosition(position);
    circle.setRadius(radius);
}

void Bullet::draw(RenderWindow *window) {
    window->draw(sprite);
    window->draw(circle);
}


CircleShape Bullet::getCircle(){
    return circle;
}

bool Bullet::isCollided(){
    if((tile->getPosition().x-position.x)>3 && abs(tile->getPosition().y-position.y)>3){
        return false;
    }else{
        collided = true;
        return true;
    }
}

bool Bullet::getCollided() {
    return collided;
}