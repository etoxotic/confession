//
// Created by yana on 10/21/20.
//

//ДВИЖОК склеевает это все вместе

#include "Engine.h"


Engine::Engine()
{
    Vector2f resolution;
//    resolution.x = VideoMode::getDesktopMode().width;
//    resolution.y = VideoMode::getDesktopMode().height;
    resolution.x = 800;
    resolution.y = 600;
    renderWindow.create(VideoMode(resolution.x, resolution.y),
                    "Confession");
}

void Engine::setTile(int x, int y, char element){
    Tile temptile;
    tiles.push_back(temptile);
    tiles.back().define(x,y,element);
}


void Engine::start()
{
    Clock clock;
    interface.setState("startPage");

    while (renderWindow.isOpen())
    {
        while (renderWindow.pollEvent(event))
        {
            inputHandler();
            deltaTime = clock.restart();
            update(deltaTime.asMilliseconds());
            draw();
        }
    }
}


void Engine::inputHandler()
{
    if (event.type == sf::Event::Closed)
        renderWindow.close();
    if (sf::Mouse::isButtonPressed(sf::Mouse::Left)){
        String link = interface.clickHandler();
        if(link == "startGame")
            interface.setState("gamePage");
        if(link == "infoPage")
            interface.setState("infoPage");
    }

}

void Engine::update(float deltaTime)
{
    Vector2i mousePos = Mouse::getPosition(renderWindow);
    interface.update(deltaTime, mousePos);
}

void Engine::draw()
{
    renderWindow.clear(Color::White);

    interface.draw(&renderWindow);

    for (Tile tile : tiles) {
        tile.draw(&renderWindow);
    }

    renderWindow.display();
}