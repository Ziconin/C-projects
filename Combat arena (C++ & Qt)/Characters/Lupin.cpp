#include <cstdlib>
#include "Lupin.h"
#include "Glaive.h"

Lupin::Lupin(string name_) : Factions(name_, "Lupin", 400, 100, 40) {
}

Lupin::Lupin(string name_, int iChoice) : Factions(name_, "Lupin", 400, 100, 40) {
    if (iChoice == 0) {
        iChoice = (rand() % 5) + 1;
    }
    createWeapon(iChoice);
}

Lupin::~Lupin() { 
}

void Lupin::checkWeapon() {
    if (dynamic_cast<Glaive*>(weapon)) {
        attack += 25;
        defence += 10;
    }
}

QString Lupin::Haste() {
    health += 30;
    attack += 15;
    QString str;
    str.append("Fighter ");
    str.append(QString::fromStdString(name));
    str.append(" uses haste!\n");
    return str;
}


