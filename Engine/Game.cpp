//
// Created by yana on 23.12.2020.
//

#include "Game.h"

Game::Game(){
    firstPress = false;
    endGame = false;
    pause = true;
    gameOn=false;
    egoLost = false;
    egoWon = false;
    messageShown = false;
    nTact=0;
    kDelay=3;
    karmaPoints = 100;
    deltaKarmaPoints = 5;
    egoTexture.loadFromFile("../resources/ego.png");
    egoSprite.setTexture(egoTexture);
    egoSprite.setPosition(280, 50);
}

void Game::start(){
    firstPress = false;
    endGame = false;
    pause = true;
    gameOn=false;
    egoLost = false;
    egoWon = false;
    messageShown = false;
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
    nMessage = 0;
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

void Game::update(Vector2i mousePos) {

    messagesUpdate();

    if(messageShown){
        message->update(mousePos);
    }

    if(!pause){
        currTime += deltaTime.getElapsedTime();

        for (Bullet *bullet : bullets)
            bullet->update();

        for(Bullet *bullet : bullets) {
            if(bullet->isCollided()) {
                if(bullet->getTile()->isPressed()) {
                    bullet->getTile()->setState("saved");
                    karmaPoints+=3*deltaKarmaPoints;
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
            egoWon = true;
            pause = true;
            anotherShot = true;
            return;
        }
        if(karmaPoints >= 500){
            endGame = true;
            egoLost = true;
            pause = true;
            anotherShot = true;
            return;
        }

        if (currTime > oneTact){
            deltaTime.restart();
            currTact++;
            nTact++;
            currTime = seconds(0);
//            if(currTact == tacts.end()){
//                endGame = true;
//                egoLost = true;
//                pause = true;
//                return;
//
//            }
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

    window->draw(egoSprite);

    for (Bullet *bullet : bullets) {
        bullet->draw(window);
    }
    for (Tile *tile : tiles) {
        tile->draw(window);
    }

    Font font;
    font.loadFromFile("../resources/thin.ttf");
    Text text;
    text.setFont(font);
    text.setCharacterSize(30);
    text.setFillColor(Color::White);
    if(!endGame)
        text.setString("KARMA");
    else
        if(egoWon)
            text.setString("EGO WON");
        else if(egoLost)
            text.setString("EGO LOST");
    text.setPosition(700-karmaPoints-80, 0);
    window->draw(text);
    RectangleShape rectangle(Vector2f(karmaPoints, 30));
    rectangle.setPosition(Vector2f(700 - karmaPoints, 10));
    window->draw(rectangle);

    if(messageShown)
        message->draw(window);

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

void Game::setMessage(String owner, String content) {
    message = new Message(owner, content);
    messageShown = true;
    setPause(true);
}

void Game::messageHandler() {
    if(messageShown){
        messageShown = false;
        setPause(false);
    }
}

void Game::clickHandler() {
    if(messageShown)
        if(message->clickHandler() == "next")
            messageHandler();
}


bool Game::isEnded() {
    return endGame;
}
bool Game::isOn(){
    return gameOn;
}
bool Game::isMessageShown() {
    return messageShown;
}


void Game::messagesUpdate() {
    if(!messageShown && nMessage == 0 && !anotherShot){
        setMessage(L"Привет!", L"Добро пожаловать в демоверсию игры \"Исповедь\"");
        nMessage++;
    }
    if(!messageShown && nMessage == 1&& !anotherShot){
        setMessage(L"", L"Это промежуточная версия, использующая демо-уровень,\nизменить который вы можете, следуя инструкциям в README");
        nMessage++;
    }
    if(!messageShown && nMessage == 2&& !anotherShot){
        setMessage(L"", L"Ваша задача - разрушить ЭГО\nДля этого нужно набрать достаточно единиц КАРМЫ (полоска наверху)");
        nMessage++;
    }
    if(!messageShown && nMessage == 3&& !anotherShot){
        setMessage(L"", L"Щит перед вами - ваша защита, это ваша АУРА\nВы одновременно можете сконцентрировать энергию АУРЫ лишь на одной ПЛИТЕ");
        nMessage++;
    }
    if(!messageShown && nMessage == 4&& !anotherShot){
        setMessage(L"", L"Чтобы сконцентрировать ЭНЕРГИЮ на нужной ПЛИТЕ,\nнажмите клавишу, изображенную на ней");
        nMessage++;
    }
    if(!messageShown && nMessage == 5&& !anotherShot){
        setMessage(L"", L"ЭГО будет защищаться\nОно атакует вас ПУЛЯМИ - внимательно за ними следите\nЕсли сконцентрировать энергию АУРЫ на участке под угрозой,\nвы сможете поймать ПУЛЮ и обойтись без урона КАРМЕ");
        nMessage++;
    }
    if(!messageShown && nMessage == 6&& !anotherShot){
        setMessage(L"", L"Поймав ПУЛЮ, вы получаете единицы КАРМЫ\nПропустив, вы их теряете");
        nMessage++;
    }
    if(!messageShown && nMessage == 7&& !anotherShot){
        setMessage(L"", L"ГОЛУБЫЕ ПЛИТЫ не находятся под угрозой.\nОРАНЖЕВЫЕ ПЛИТЫ находятся под угрозой попадения ПУЛИ\nНа РОЗОВЫХ ПЛИТАХ сконцентрирована энергия АУРЫ\nЗЕЛЕНЫЕ ПЛИТЫ были защищены\nКРАСНЫЕ ПЛИТЫ получили урон");
        nMessage++;
    }
    if(!messageShown && nMessage == 8&& !anotherShot){
        setMessage(L"", L"Вроде не так сложно, верно?");
        nMessage++;
    }
    if(!messageShown && nMessage == 9&& !anotherShot){
        setMessage(L"", L"Приятной игры,\nи не забудьте прочитать справочную информацию!");
        nMessage++;
    }
    if(!messageShown && nMessage == 10&& !anotherShot){
        setMessage(L"ЭГО", L"ПОДАРИ МНЕ СВОЮ ИСПОВЕДЬ");
        nMessage++;
    }
    if(!messageShown && nMessage < 10 && anotherShot)
        nMessage = 10;
    if(!messageShown && nMessage == 10&& anotherShot){
        setMessage(L"ЭГО", L"ХОЧЕШЬ ОТДАТЬ ЕЩЕ ОДНУ ИСПОВЕДЬ?\n");
        nMessage++;
    }
    if(egoLost && endGame && !messageShown && nMessage == 11)
    {
        setMessage(L"", L"Произошел раскол ЭГО!\nЧто, в принципе, означает, что вы победили уровень.");
        nMessage++;
    }
    if(egoWon && endGame && !messageShown && nMessage == 11)
    {
        setMessage(L"", L"ЭГО добилось вашей ИСПОВЕДИ - вы признали его доминантность!\nЧто, в принципе, означает, что вы проиграли.");
        nMessage++;
    }
    if(endGame && !messageShown && nMessage == 12)
    {
        setMessage(L"", L"Нажмите \"дальше\", если хотите сыграть снова");
        nMessage++;
    }
    if(endGame && !messageShown && nMessage == 13)
    {
        start();
    }

}