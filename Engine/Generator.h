//
// Created by yana on 23.12.2020.
//
//Считывание и генерация уровня
//Обр. внимание - namespace std, не sf

#ifndef CONFESSIONPROJECT_GENERATOR_H
#define CONFESSIONPROJECT_GENERATOR_H

#include "Tile.h"
#include <list>
#include <iostream>
#include <fstream>
#include<string>
#include<sstream>

using namespace std;


class Generator {
private:
    list <list<char>*> lines;
    int *bmp;
    list<Tile*> *tiles;
    int levelId;
    list<char> *tacts;
    string schemeConf;
    void setTile(int x, int y, char element);
    void setTilesScheme();
    void generateTacts();
    void readLevel();
public:
    Generator(int levelId, list<Tile*> *tiles, list<char> *tacts, int*bmp);

};


#endif //CONFESSIONPROJECT_GENERATOR_H
