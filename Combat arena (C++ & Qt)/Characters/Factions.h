
#ifndef FACTIONS_H
#define FACTIONS_H
#include "Weapons.h"
#include <QString>
#include <iostream>

using namespace std;

class Factions {
public:
  virtual ~Factions();
  void createWeapon(int);
  string getName();
  Weapons* getWeapon();
  string getClass();
  int getHealth();
  int getAttack();
  int getDefence(); 
  virtual void checkWeapon ();
  QString printSpecs();
  float Attack(int);
  bool loseHealth(float);
  
protected:
  Factions(string, string, int, int, int);
  string name;
  string cls;
  Weapons* weapon;
  float health;
  int attack;
  int defence;
private:

};
#endif // FACTIONS_H
