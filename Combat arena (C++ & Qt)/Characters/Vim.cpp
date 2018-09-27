#include <cstdlib>
#include "Vim.h"
#include "Duoblade.h"

Vim::Vim(string name_) : Factions(name_, "Vim", 500, 100, 60) {
}

Vim::Vim(string name_, int iChoice) : Factions(name_, "Vim", 500, 100, 60) {
    if (iChoice == 0) {
        iChoice = (rand() % 5) + 1;
    }
    createWeapon(iChoice);
}

Vim::~Vim() { 
}

void Vim::checkWeapon() {
    if (dynamic_cast<Duoblade*>(weapon)) {
        attack += 25;
        defence += 10;
    }
}

QString Vim::EnhanceAttack() {
    attack += 60;
    QString str;
    str.append("Fighter ");
    str.append(QString::fromStdString(name));
    str.append(" enhances his attack!\n");
    return str;
}