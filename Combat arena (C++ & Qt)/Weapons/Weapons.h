
#ifndef WEAPONS_H
#define WEAPONS_H

#include <iostream>
#include <QString>

using namespace std;

class Weapons
{
public:
  virtual ~Weapons();
  int getDamage();
  QString getWeaponID();

protected:
  Weapons(int, QString);
  int damage;
  QString weapon_name;
private:
  

};
#endif // WEAPONS_H
