#include <cstdlib>
#include "Jadeon.h"
#include "Sword.h"

Jadeon::Jadeon(string name_) : Factions(name_, "Jadeon", 300, 80, 60) {
}

Jadeon::Jadeon(string name_, int iChoice) : Factions(name_, "Jadeon", 300, 80, 60) {
    createWeapon(iChoice);
}

Jadeon::~Jadeon () { 
}

void Jadeon::checkWeapon() {
    if (dynamic_cast<Sword*>(weapon)) {
        attack += 25;
        defence += 10;
    }
}

QString Jadeon::EnhanceDefence() {
    defence += 40;
    QString str;
    str.append("Fighter ");
    str.append(QString::fromStdString(name));
    str.append(" enhances his defence!\n");
    return str;
}

 


