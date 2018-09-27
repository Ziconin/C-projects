
#ifndef GAMEENGINE_H
#define GAMEENGINE_H

#include <iostream>
#include <vector>
#include <QString>
#include "Arena.h"
#include "Factions.h"

using namespace std;

class GameEngine
{
public:

  GameEngine();
  virtual ~GameEngine();
  void createFighter(string, int, int);
  void createRandomFighter();
  QString printAll();
  QString EnterBattle();
  QString Stats();

private:
    Arena arena;
};

#endif // GAMEENGINE_H
