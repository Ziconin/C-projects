#include <cstdlib>
#include <limits>
#include "Arena.h" 
#include "Jadeon.h"
#include "Lupin.h"
#include "Modo.h"
#include "Skysong.h"
#include "Vim.h"

Arena::Arena() {
}

Arena::~Arena() {
    for(unsigned int i = 0;i<FighterList.size();i++) {
        delete FighterList[i];
    }
}

void Arena::addFighters(Factions* fighter) {
    FighterList.push_back(fighter);
}

QString Arena::printFighters() {    
    if (FighterList.size() == 0) {
        return "No fighters in the arena...";
    }

    QString str;
    for (unsigned int i = 0; i<FighterList.size(); i++) {
        str.append(FighterList[i]->printSpecs());
        str.append("\n");
    }
    return str;
}

QString Arena::Fight() {    
    if (FighterList.size() == 0) {
        return "There's no one to do the fighting.";
    }
    else if (FighterList.size() == 1) {
        return "Man cannot fight alone.";
    }
    bool winner;
    int attack;
    QString str;
    unsigned int f1, f2;
    f1 = (rand() % FighterList.size());
    f2 = (rand() % FighterList.size());
    if(f2 == f1) {
        f2 = f1 + 1;
    }
    if(f2 > FighterList.size()) {
        f2 = f1 - 2;
    }
    checkClass(FighterList[f1], 2);
    checkClass(FighterList[f2], 2);
    float iChance;
    int counter = 0;
    while (1) {
        iChance = rand() / (double)RAND_MAX;
        if (iChance > 0.4 && iChance < 0.5) {
            str.append(checkClass(FighterList[f1], 0));
        }
        else {
            attack = FighterList[f1]->Attack(FighterList[f2]->getDefence());
            winner = FighterList[f2]->loseHealth(attack);
            str.append(QString::fromStdString(FighterList[f1]->getName()));
            str.append(" did ");
            str.append(QString::number(attack));
            str.append(" HP of damage.\n");
        }
        if (winner == true) {
            str.append("The winner is ");
            str.append(QString::fromStdString(FighterList[f1]->getName()));
            break;
        }
        if (iChance > 0.05 && iChance < 0.15) {
            str.append(checkClass(FighterList[f2], 0));
        }
        else {
            attack = FighterList[f2]->Attack(FighterList[f1]->getDefence());
            winner = FighterList[f1]->loseHealth(attack);
            str.append(QString::fromStdString(FighterList[f2]->getName()));
            str.append(" did ");
            str.append(QString::number(attack));
            str.append(" HP of damage.\n");
        }
        if (winner == true) {
            str.append("The winner is ");
            str.append(QString::fromStdString(FighterList[f1]->getName()));
            break;
        }
        counter++;
        if(counter > 30) {
            str.append("Draw!\n");
            break;
        }
    }
    stats.setTotal();
    for(unsigned int i = 0;i<FighterList.size();i++) {
        if(FighterList[i]->getHealth() == 0) {
            checkClass(FighterList[i], 1);
            delete FighterList[i];
            FighterList.erase(FighterList.begin() + i);
        }
    }
    return str;
}

QString Arena::checkClass(Factions* f, int i) {
    Jadeon *j = dynamic_cast<Jadeon*>(f);
    Lupin *l = dynamic_cast<Lupin*>(f);
    Modo *m = dynamic_cast<Modo*>(f);
    Skysong *s = dynamic_cast<Skysong*>(f);
    Vim *v = dynamic_cast<Vim*>(f);
    QString str;
    if (i == 0) {
        if(j) {
            str.append(j->EnhanceDefence());
        }
        if(l) {
            str.append(l->Haste());
        }
        if(m) {
            str.append(m->Transform());
        }
        if(s) {
            str.append(s->Heal());
        }
        if(v) {
            str.append(v->EnhanceAttack());
        }
    }
    else if(i == 1) {
        if(j) {
            stats.setWins(1);
        }
        if(l) {
            stats.setWins(2);
        }
        if(m) {
            stats.setWins(3);
        }
        if(s) {
            stats.setWins(4);
        }
        if(v) {
            stats.setWins(5);
        }
    }
    else if (i == 2) {
        if(j) {
            stats.setMatches(1);
        }
        if(l) {
            stats.setMatches(2);
        }
        if(m) {
            stats.setMatches(3);
        }
        if(s) {
            stats.setMatches(4);
        }
        if(v) {
            stats.setMatches(5);
        }
    }
    return str;
}

QString Arena::showStats() {
    QString str = stats.printStats();
    return str;
}

void Arena::addFightersToStats() {
    stats.setTotalFighters();
}

void Arena::addFactionsToStats(int check) {
    stats.setFactions(check);
}


