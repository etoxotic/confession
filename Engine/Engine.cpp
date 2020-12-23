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
    windowState = "startPage";
}


void Engine::start()
{
    Clock clock;
    interface = new Interface();

    interface->setState(windowState);

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

void Engine::startGame(){
    game = new Game();
    generator = new Generator(0,game->getTiles(),"zero");
}

void Engine::inputHandler()
{
    if (event.type == sf::Event::Closed)
        renderWindow.close();
    if (sf::Mouse::isButtonPressed(sf::Mouse::Left)){
        String link = interface->clickHandler();
        if(link == "startGame"){
            windowState = "gamePage";
            interface->setState(windowState);
            startGame();
        }
        if(link == "infoPage"){
            windowState = "infoPage";
            interface->setState(windowState);
        }
    }
    if (event.type == sf::Event::KeyPressed && windowState == "gamePage"){
        char key = keyHandler(event.key.code);
        game->tilePress(key);
    }

}

void Engine::update(float deltaTime)
{
    Vector2i mousePos = Mouse::getPosition(renderWindow);
    interface->update(deltaTime, mousePos);
}

void Engine::draw()
{
    renderWindow.clear(Color::White);

    interface->draw(&renderWindow);

    if(windowState == "gamePage")
        game->draw(&renderWindow);

    renderWindow.display();
}