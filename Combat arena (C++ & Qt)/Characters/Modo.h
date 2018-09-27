
#ifndef MODO_H
#define MODO_H
#include "Factions.h"

using namespace std;

class Modo : public Factions
{
public:

  Modo(string);
  Modo(string, int);
  virtual ~Modo();
  void checkWeapon ();
  QString Transform();
};

#endif // MODO_H
