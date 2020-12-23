//
// Created by yana on 23.12.2020.
//

#include "KeyHandler.h"

char keyHandler(Keyboard::Key key){
    switch(key){
        case Keyboard::Key::Q:
            return 'Q';
        case Keyboard::Key::W:
            return 'W';
        case Keyboard::Key::E:
            return 'E';
        case Keyboard::Key::R:
            return 'R';
        case Keyboard::Key::T:
            return 'T';
        case Keyboard::Key::Y:
            return 'Y';
        case Keyboard::Key::U:
            return 'U';
        case Keyboard::Key::I:
            return 'I';
        case Keyboard::Key::O:
            return 'O';
        case Keyboard::Key::P:
            return 'P';
        case Keyboard::Key::A:
            return 'A';
        case Keyboard::Key::S:
            return 'S';
        case Keyboard::Key::D:
            return 'D';
        case Keyboard::Key::F:
            return 'F';
        case Keyboard::Key::G:
            return 'G';
        case Keyboard::Key::H:
            return 'H';
        case Keyboard::Key::J:
            return 'J';
        case Keyboard::Key::K:
            return 'K';
        case Keyboard::Key::L:
            return 'L';
        case Keyboard::Key::Z:
            return 'Z';
        case Keyboard::Key::X:
            return 'X';
        case Keyboard::Key::C:
            return 'C';
        case Keyboard::Key::V:
            return 'V';
        case Keyboard::Key::B:
            return 'B';
        case Keyboard::Key::N:
            return 'N';
        case Keyboard::Key::M:
            return 'M';

    }
    return'0';
}