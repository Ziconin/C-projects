
#ifndef VIM_H
#define VIM_H
#include "Factions.h"

using namespace std;

class Vim : public Factions
{
public:

  Vim(string);
  Vim(string, int);
  virtual ~Vim();
  void checkWeapon();
  QString EnhanceAttack();
};

#endif // VIM_H
