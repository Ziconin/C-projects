/*
 * File:   HTForm.cpp
 * Author: c0341124
 *
 * Created on 14. joulukuuta 2012, 13:26
 */

#include "HTForm.h"

HTForm::HTForm() {
    widget.setupUi(this);
    connect(widget.pushButton, SIGNAL(clicked()), this, SLOT(cChar()));
    connect(widget.pushButton_2, SIGNAL(clicked()), this, SLOT(crChar()));
    connect(widget.pushButton_3, SIGNAL(clicked()), this, SLOT(showStats()));
    connect(widget.pushButton_4, SIGNAL(clicked()), this, SLOT(printAll()));
    connect(widget.pushButton_5, SIGNAL(clicked()), this, SLOT(fight()));
}

HTForm::~HTForm() {
}

std::string HTForm::insertName() {
    QString name = widget.lineEdit->text();
    return name.toStdString();
}

int HTForm::insertClass() {
    int cNmb;
    if (widget.radioButton->isChecked()) {cNmb = 1;}
    if (widget.radioButton_2->isChecked()) {cNmb = 2;}
    if (widget.radioButton_3->isChecked()) {cNmb = 3;}
    if (widget.radioButton_4->isChecked()) {cNmb = 4;}
    if (widget.radioButton_5->isChecked()) {cNmb = 5;}
    return cNmb;
}

int HTForm::insertWeapon() {
    int wNmb;
    if (widget.radioButton_6->isChecked()) {wNmb = 1;}
    if (widget.radioButton_7->isChecked()) {wNmb = 2;}
    if (widget.radioButton_8->isChecked()) {wNmb = 3;}
    if (widget.radioButton_9->isChecked()) {wNmb = 4;}
    if (widget.radioButton_10->isChecked()) {wNmb = 5;}
    return wNmb;
}

Ui::HTForm HTForm::getWidget() {
    return widget;
}

void HTForm::cChar() {
    string name = insertName();
    int cNmb = insertClass();
    int wNmb = insertWeapon();
    if(name.length() > 0 && cNmb > 0 && cNmb <= 5 && wNmb > 0 && wNmb <= 5) {
        engine.createFighter(name, cNmb, wNmb);
        widget.textBrowser->setText("Created new fighter into the arena.");
    }
}

void HTForm::crChar() {
    engine.createRandomFighter();
    widget.textBrowser->setText("Created new fighter into the arena.");
}

void HTForm::showStats() {
    widget.textBrowser->setText(engine.Stats());
}

void HTForm::printAll() {
    widget.textBrowser->setText(engine.printAll());
}

void HTForm::fight() {
    widget.textBrowser->setText(engine.EnterBattle());
}