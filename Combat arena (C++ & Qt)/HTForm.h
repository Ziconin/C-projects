/* 
 * File:   HTForm.h
 * Author: c0341124
 *
 * Created on 14. joulukuuta 2012, 13:26
 */

#ifndef _HTFORM_H
#define	_HTFORM_H

#include "ui_HTForm.h"
#include "GameEngine.h"

class HTForm : public QDialog {
    Q_OBJECT
public:
    HTForm();
    virtual ~HTForm();
    void setEngine(std::string, int, int);
    std::string insertName();
    int insertClass();
    int insertWeapon();
    Ui::HTForm getWidget();
private slots:
    void cChar();
    void crChar();
    void printAll();
    void showStats();
    void fight();
private:
    GameEngine engine;
    Ui::HTForm widget;
};

#endif	/* _HTFORM_H */
