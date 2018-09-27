
#ifndef ARENA_H
#define ARENA_H

#include <iostream>
#include <vector>
#include <QString>
#include "Factions.h"
#include "statistics.h"


using namespace std;

class Arena
{
public:
  Arena();
  virtual ~Arena();
  void addFighters(Factions*);
  QString printFighters();
  QString Fight();
  QString checkClass(Factions*, int);
  QString showStats();
  void addFightersToStats();
  void addFactionsToStats(int);
private:
  vector<Factions*> FighterList;
  statistics stats;
};

#endif // ARENA_H
