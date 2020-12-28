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
    renderWindow.setKeyRepeatEnabled(false);
    windowState = "startPage";
    updatePeriod = seconds(0.1f);
}


void Engine::start()
{
    clock.restart();
    game = new Game();
    interface = new Interface();
    interface->setState(windowState);

    while (renderWindow.isOpen())
    {
        if(renderWindow.pollEvent(event))
            inputHandler();
        if(clock.getElapsedTime() > updatePeriod){
            update();
            draw();
            clock.restart();
        }
    }
}

void Engine::startGame(){
    if(!game->isOn())
        game->start();
    else
        game->setPause(false);
}

void Engine::inputHandler()
{
    if (event.type == sf::Event::Closed)
        renderWindow.close();
    if (sf::Mouse::isButtonPressed(sf::Mouse::Left)){
        String link = interface->clickHandler();
        if(link == "gamePage"){
            windowState = "gamePage";
            interface->setState(windowState);
            startGame();
        }
        if(link == "infoPage"){
            windowState = "infoPage";
            interface->setState(windowState);
        }
        if(link == "startPage"){
            windowState = "startPage";
            interface->setState(windowState);
        }
        if(link == "gamePaused"){
            windowState = "gamePaused";
            interface->setState(windowState);
            game->setPause(true);
        }
    }
    if (event.type == sf::Event::KeyPressed){
        if(event.key.code == sf::Keyboard::Space&& windowState == "gamePage"){
            windowState = "gamePaused";
            interface->setState(windowState);
            game->setPause(true);
        }
        else if(event.key.code == sf::Keyboard::Space && windowState == "gamePaused"){
            windowState = "gamePage";
            interface->setState(windowState);
            startGame();
        }
        else if(windowState == "gamePage"){
            char key = keyHandler(event.key.code);
            game->tilePress(key);
        }
    }

}

void Engine::update()
{
    Vector2i mousePos = Mouse::getPosition(renderWindow);
    interface->update(mousePos);
    if(windowState == "gamePage" || windowState=="gamePaused")
        game->update();
}

void Engine::draw()
{
    renderWindow.clear(Color::White);

    interface->draw(&renderWindow);

    if(windowState == "gamePage" || windowState == "gamePaused")
        game->draw(&renderWindow);

    renderWindow.display();
}

