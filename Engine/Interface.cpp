//
// Created by yana on 21.12.2020.
//

//ИНТЕРФЕЙС надо сюда перенести все интерфейсные штуки

#include "Interface.h"
#include <iostream>

Interface::Interface(){
    backgroundTexture.loadFromFile("../resources/background.png");
    backgroundSprite.setTexture(backgroundTexture);
    fancyFont.loadFromFile("../resources/fancy.ttf");
    basicFont.loadFromFile("../resources/thin.ttf");
}

void Interface::setState(String state){
    titles.clear();
    buttons.clear();
    if(state == "startPage"){
        setText(150,50,"logo","CONFESSION");
        setText(334,150,"text",L"ИСПОВЕДЬ");
        setText(0,560,"tinytext","demover.");
        setText(265 ,550,"tinytext", L"Советуем использовать наушники");
        setText(710,560,"tinytext","@etoxotic");
        setButton(250,250,"normal","PLAY","gamePage");
        setButton(380, 380, "borderless", "INFO", "infoPage");
    }
    if(state == "gamePage"){
        setButton(10, 0, "borderless", " <- ", "startPage");
        setButton(750, 0, "borderless", " || ", "gamePaused");
    }
    if(state == "gamePaused"){
        setButton(10, 0, "borderless", " <- ", "startPage");
        setButton(750, 0, "borderless", " |> ", "gamePage");
    }
    if(state == "infoPage"){
        setText(30 ,50,"tinytext", L"Для полной информации посетите https://github.com/etoxotic/confession");
        setText(30 ,110,"tinytext", L"Enter - перелистнуть диалог");
        setText(30 ,140,"tinytext", L"Пробел - пауза");
        setText(30 ,170,"tinytext", L"Клавишы букв - защитить одноименную ПЛИТУ");
        setText(30 ,200,"tinytext", L"ГОЛУБАЯ ПЛИТА не находится под угрозой");
        setText(30 ,230,"tinytext", L"ОРАНЖЕВАЯ ПЛИТА находится под угрозой");
        setText(30 ,260,"tinytext", L"РОЗОВАЯ ПЛИТА защищена АУРОЙ (нажата)");
        setText(30 ,290,"tinytext", L"КРАСНАЯ ПЛИТА получила урон");
        setText(30 ,320,"tinytext", L"ЗЕЛЕНАЯ ПЛИТА была защищена");

        setButton(10, 0, "borderless", " <- ", "startPage");
    }
}

void Interface::update(Vector2i mousePos)
{
    for (Button *b : buttons) {
        b->update(mousePos);
    }
}

void Interface::draw(RenderWindow *window){
    window->draw(backgroundSprite);
    for (Button *b : buttons) {
        b->draw(window);
    }
    for (Text text : titles) {
        window->draw(text);
    }
}

void Interface::setButton(int x, int y, String type, String text, String link) {
    Vector2f temp;
    temp.x = x; temp.y = y;
    Button* tempbut = new Button(temp, type, text, link);
    buttons.push_back(tempbut);
}

void Interface::setText(int x, int y, String type, String t) {
    Text text;
    if(type == "logo"){
        text.setFont(fancyFont);
        text.setCharacterSize(100);
    }
    if(type == "text"){
        text.setFont(basicFont);
        text.setCharacterSize(50);
    }
    if(type == "tinytext"){
        text.setFont(basicFont);
        text.setCharacterSize(35);
    }
    text.setFillColor(Color::White);
    text.setString(t);
    text.setPosition(x, y);
    titles.push_back(text);
}

String Interface::clickHandler() {
    for (Button *b : buttons) {
        String handler = b->clickHandler();
        if (handler != "None")
            return handler;
    }
    return "None";
}
