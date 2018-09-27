
#ifndef LUPIN_H
#define LUPIN_H
#include "Factions.h"

using namespace std;

class Lupin : public Factions
{
public:

  Lupin(string);
  Lupin(string, int);
  virtual ~Lupin();
  void checkWeapon ();
  QString Haste();
};

#endif // LUPIN_H
