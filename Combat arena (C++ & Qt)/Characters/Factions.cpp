#include <cstdlib>
#include <ctime>
#include <qt4/QtCore/qstring.h>
#include "Factions.h"
#include "Sword.h"
#include "Staff.h"
#include "Glaive.h"
#include "Fangclaw.h"
#include "Duoblade.h"
#include "Jadeon.h"

Factions::Factions (string name_, string cls_, int H, int A, int D) : name(name_), cls(cls_), health(H), attack(A), defence(D) {
}

Factions::~Factions () { 
    delete weapon;
}

void Factions::createWeapon(int i) {
    if (i == 1) {
        Duoblade* s = new Duoblade();
        weapon = s;
    }
    else if (i == 2) {
        Fangclaw* s = new Fangclaw();
        weapon = s;
    }
    else if (i == 3) {
        Glaive* s = new Glaive();
        weapon = s;
    }
    else if (i == 4) {
        Staff* s = new Staff();
        weapon = s;
    }
    else if (i == 5) {
        Sword* s = new Sword();
        weapon = s;
    }
    checkWeapon();
}

string Factions::getName() {
    return name;
}

Weapons* Factions::getWeapon() {
    return weapon;
}

string Factions::getClass() {
    return cls;
}

int Factions::getHealth() {
    return health;
}

int Factions::getAttack() {
    return attack;
}

int Factions::getDefence() {
    return defence;
}

void Factions::checkWeapon() {
}

QString Factions::printSpecs() {
    QString str;
    str = "Fighter: ";
    str.append(QString::fromStdString(name));
    str.append("\nClass: ");
    str.append(QString::fromStdString(cls));
    str.append("\nWeapon: ");
    str.append(weapon->getWeaponID());
    str.append("\nHealth: ");
    str.append(QString::number(health));
    str.append("\nAttack: ");
    str.append(QString::number(attack));
    str.append("\nDefence: ");
    str.append(QString::number(defence));
    str.append("\n");
    return str;
}

float Factions::Attack(int op_def) {
    float multiplier = ((rand() % 5) + 5) / 10.0;
    float result = multiplier*(attack + weapon->getDamage() - op_def);
    if (result < 0) {
        return 10;
    }
    return result;
}

bool Factions::loseHealth(float op_atk) {
    health -= op_atk;
    if (health <= 0) {
        health = 0;
        return true;
    }
    return false;
}



