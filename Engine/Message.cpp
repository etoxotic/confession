//
// Created by yana on 23.12.2020.
//

#include "Message.h"

Message::Message(String _owner, String _content) {
    content = _content;
    owner = _owner;
    font.loadFromFile("../resources/thin.ttf");
    text.setFont(font);
    text.setCharacterSize(30);
    text.setString(content);
    text.setPosition(50, 395);
    text.setFillColor(Color::White);
    title.setFont(font);
    title.setCharacterSize(35);
    title.setString(owner);
    title.setPosition(100, 345);
    title.setFillColor(Color::White);
    backTexture.loadFromFile("../resources/message.png");
    backSprite.setTexture(backTexture);
    backSprite.setPosition(Vector2f(20,340));
    texture.loadFromFile("../resources/empty.png");
    if(owner == L"ЭГО")
        texture.loadFromFile("../resources/egoava.png");
    sprite.setTexture(texture);
    sprite.setPosition(500, 380);
    next = new Button(Vector2f(740, 530), "borderless", "->", "next");
}

String Message::clickHandler() {
    return next->clickHandler();
}

void Message::update(Vector2i mousePos) {
    next->update(mousePos);
}

void Message::draw(RenderWindow *window) {
    window->draw(backSprite);
    window->draw(sprite);
    window->draw(text);
    window->draw(title);
    next->draw(window);
}