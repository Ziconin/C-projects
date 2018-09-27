#include <cstdlib>
#include <limits>
#include "GameEngine.h"
#include "Jadeon.h"
#include "Lupin.h"
#include "Modo.h"
#include "Skysong.h"
#include "Vim.h"

GameEngine::GameEngine() {
}

GameEngine::~GameEngine() {
}

void GameEngine::createFighter(string name, int classNumber, int weaponNumber) {
    Jadeon* j;
    Lupin* l;
    Modo* m;
    Skysong* s;
    Vim* v;

    arena.addFightersToStats();
    arena.addFactionsToStats(classNumber);
    switch (classNumber) {
        case 1: 
            j = new Jadeon(name, weaponNumber);
            arena.addFighters(j);
            break;
        case 2:
            l = new Lupin(name, weaponNumber);
            arena.addFighters(l);
            break;
        case 3:
            m = new Modo(name, weaponNumber);
            arena.addFighters(m);
            break;
        case 4:
            s = new Skysong(name, weaponNumber);
            arena.addFighters(s);
            break;
        case 5:
            v = new Vim(name, weaponNumber);
            arena.addFighters(v);
            break;
        default:
            cout << "Unknown selection." << endl;
            break;
    }
}

void GameEngine::createRandomFighter() {
    Jadeon* j;
    Lupin* l;
    Modo* m;
    Skysong* s;
    Vim* v;
    string nameList[] = {"Kalle","Ville","Jari","Timo","Tuukka","Janne","Teemu","Niklas","Arttu","Tuomas"};
    int weaponNumber = (rand() % 5) + 1, classNumber = (rand() % 5) + 1, nameNumber = (rand() % 9) + 1;
    string name = nameList[nameNumber];
    arena.addFightersToStats();
    arena.addFactionsToStats(classNumber);
    switch (classNumber) {
        case 1: 
            j = new Jadeon(name, weaponNumber);
            arena.addFighters(j);
            break;
        case 2:
            l = new Lupin(name, weaponNumber);
            arena.addFighters(l);
            break;
        case 3:
            m = new Modo(name, weaponNumber);
            arena.addFighters(m);
            break;
        case 4:
            s = new Skysong(name, weaponNumber);
            arena.addFighters(s);
            break;
        case 5:
            v = new Vim(name, weaponNumber);
            arena.addFighters(v);
            break;
    }
}

QString GameEngine::printAll() {
    QString str = arena.printFighters();
    return str;
}

QString GameEngine::EnterBattle() {
    QString str = arena.Fight();
    return str;
}

QString GameEngine::Stats() {
    QString str = arena.showStats();
    return str;
}


