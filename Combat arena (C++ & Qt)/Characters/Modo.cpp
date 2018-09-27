#include <cstdlib>
#include "Modo.h"
#include "Fangclaw.h"

Modo::Modo(string name_) : Factions(name_, "Modo", 350, 130, 60) {
}

Modo::Modo(string name_, int iChoice) : Factions(name_, "Modo", 350, 130, 60) {
    if (iChoice == 0) {
        iChoice = (rand() % 5) + 1;
    }
    createWeapon(iChoice);
}

Modo::~Modo() { 
}

void Modo::checkWeapon() {
    if (dynamic_cast<Fangclaw*>(weapon)) {
        attack += 25;
        defence += 10;
    }
}

QString Modo::Transform() {
    health -= 30;
    attack += 40;
    defence += 20;
    QString str;
    str.append("Fighter ");
    str.append(QString::fromStdString(name));
    str.append(" uses transform!\n");
    return str;
}


