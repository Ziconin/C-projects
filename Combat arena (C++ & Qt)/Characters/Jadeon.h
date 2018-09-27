
#ifndef JADEON_H
#define JADEON_H
#include "Factions.h"

#include <iostream>

using namespace std;

class Jadeon : public Factions
{
public:

  Jadeon(string);
  Jadeon(string, int);
  virtual ~Jadeon();
  void checkWeapon ();
  QString EnhanceDefence();
};

#endif // JADEON_H
