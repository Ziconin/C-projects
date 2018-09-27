#include <cstdlib>
#include "Skysong.h"
#include "Staff.h"

Skysong::Skysong(string name_) : Factions(name_ , "Skysong", 340, 80, 40) {
}

Skysong::Skysong(string name_, int iChoice) : Factions(name_, "Skysong", 340, 80, 40) {
    if (iChoice == 0) {
        iChoice = (rand() % 5) + 1;
    }
    createWeapon(iChoice);
}

Skysong::~Skysong() { 
}

void Skysong::checkWeapon() {
    if (dynamic_cast<Staff*>(weapon)) {
        attack += 25;
        defence += 10;
    }
}

QString Skysong::Heal() {
    health += 100;
    QString str;
    str.append("Fighter ");
    str.append(QString::fromStdString(name));
    str.append(" uses heal!\n");
    return str;
}

