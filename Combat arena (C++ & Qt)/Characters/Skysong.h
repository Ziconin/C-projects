
#ifndef SKYSONG_H
#define SKYSONG_H
#include "Factions.h"

using namespace std;

class Skysong : public Factions
{
public:

  Skysong(string);
  Skysong(string, int);
  virtual ~Skysong();
  void checkWeapon ();
  QString Heal();
};

#endif // SKYSONG_H
