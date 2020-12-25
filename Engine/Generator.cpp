//
// Created by yana on 23.12.2020.
//

#include "Generator.h"

Generator::Generator(int _id, list<Tile*> *_tiles, list<char> *_tacts, int* _bmp) {
    levelId = _id; tiles = _tiles;
    tacts = _tacts;
    bmp = _bmp;
    list<char> line1, line2, line3;
    lines.push_back(&line1);
    lines.push_back(&line2);
    lines.push_back(&line3);

    readLevel();
}

void Generator::readLevel() {
    fstream levelFile;
    levelFile.open("../resources/Levels/Level"+to_string(levelId)+".txt");
    string readLine;
    getline (levelFile, readLine);
    *bmp = stoi(readLine);
    getline (levelFile, readLine);
    schemeConf = readLine;
    for (list<char> *keyLine : lines) {
        getline (levelFile, readLine);
        for (char key: readLine){
            if(int(key)>64 && int(key)<90)
                keyLine->push_back(key);
        }
    }
    getline (levelFile, readLine);
    for (auto key: readLine){
        if(int(key)>64 && int(key)<90)
            tacts->push_back(key);
    }
    levelFile.close();
    setTilesScheme();
}

void Generator::setTilesScheme() {
    int y = 0;
    for (auto keyLine : lines) {
        int n = keyLine->size();
        int x = 120;
        if(schemeConf == "zero"){
            if(y==0)
                x += 100;
            if(y==1)
                x += 0;
            if(y==2)
                x += 40;
        }
        for (char key: *keyLine){
            setTile(x, 250+y*80, key);
            x+=140;
        }
        y+=1;
    }
}

void Generator::setTile(int x, int y, char element){
    Tile *temptile = new Tile(x,y,element);
    tiles->push_back(temptile);
}

void Generator::generateTacts() {

}

