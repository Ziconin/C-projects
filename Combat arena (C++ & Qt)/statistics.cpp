/* 
 * File:   statistics.cpp
 * Author: c0341124
 * 
 * Created on 4. joulukuuta 2012, 18:07
 */

#include "statistics.h"

statistics::statistics() : total(0), total_fighters(0), jads(0), lups(0), mods(0), skys(0), vims(0), jad_loss(0), lup_loss(0), 
mod_loss(0), sky_loss(0), vim_loss(0), jad_match(0), lup_match(0), mod_match(0), sky_match(0), vim_match(0) {
}

void statistics::setTotal() {
    total++;
}

void statistics::setTotalFighters() {
    total_fighters++;
}

void statistics::setFactions(int check) {
    switch(check) {
        case 1: 
            jads++;
            break;
        case 2:
            lups++;
            break;
        case 3:
            mods++;
            break;
        case 4:
            skys++;
            break;
        case 5:
            vims++;
            break;
        default:
            break;
    }
}

QString statistics::printStats() {
    QString str;
    str.append("Total fights: ");
    str.append(QString::number(total));
    str.append("\nWins:\n\tJadeons: ");
    str.append(QString::number(jad_match - jad_loss));
    str.append("\n\tLupins: ");
    str.append(QString::number(lup_match - lup_loss));
    str.append("\n\tModos: ");
    str.append(QString::number(mod_match - mod_loss));
    str.append("\n\tSkysongs: ");
    str.append(QString::number(sky_match - sky_loss));
    str.append("\n\tVims: ");
    str.append(QString::number(vim_match - vim_loss));
    str.append("\nTotal fighters created: ");
    str.append(QString::number(total_fighters));
    str.append("\nFrom which:\n\tJadeons: ");
    str.append(QString::number(jads));
    str.append("\n\tLupins: ");
    str.append(QString::number(lups));
    str.append("\n\tModos: ");
    str.append(QString::number(mods));
    str.append("\n\tSkysongs: ");
    str.append(QString::number(skys));
    str.append("\n\tVims: ");
    str.append(QString::number(vims));
    str.append("\n");
    return str;
}

void statistics::setWins(int check) {
    switch(check) {
        case 1:
            jad_loss++;
            break;
        case 2:
            lup_loss++;
            break;
        case 3:
            mod_loss++;
            break;
        case 4:
            sky_loss++;
            break;
        case 5:
            vim_loss++;
            break;
        default:
            break;
    }
}

void statistics::setMatches(int check) {
    switch(check) {
        case 1:
            jad_match++;
            break;
        case 2:
            lup_match++;
            break;
        case 3:
            mod_match++;
            break;
        case 4:
            sky_match++;
            break;
        case 5:
            vim_match++;
            break;
        default:
            break;
    }
}

statistics::~statistics() {
}

