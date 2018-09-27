#include "Weapons.h" 

Weapons::Weapons(int dmg, QString name_) : damage(dmg), weapon_name(name_) {
}

Weapons::~Weapons() { 
}

int Weapons::getDamage() {
    return damage;
}

QString Weapons::getWeaponID() {
    return weapon_name;
}

