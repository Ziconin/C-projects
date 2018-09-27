/* 
 * File:   statistics.h
 * Author: c0341124
 *
 * Created on 4. joulukuuta 2012, 18:07
 */

#ifndef STATISTICS_H
#define	STATISTICS_H

#include <iostream>
#include <QString>

using namespace std;

class statistics {
public:
    statistics();
    void setTotal();
    void setTotalFighters();
    void setFactions(int);
    void setWins(int);
    void setMatches(int);
    QString printStats();
    virtual ~statistics();
private:
    int total;
    int total_fighters;
    int jad_match;
    int lup_match;
    int mod_match;
    int sky_match;
    int vim_match;
    int jad_loss;
    int lup_loss;
    int mod_loss;
    int sky_loss;
    int vim_loss;
    int jads;
    int lups;
    int vims;
    int skys;
    int mods;
};

#endif	/* STATISTICS_H */

