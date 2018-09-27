/* 
 * File:   main.cpp
 * Author: c0341124
 *
 * Created on 8. marraskuuta 2012, 16:03
 */

#include <QtGui/QApplication>
#include <iostream>
#include <limits>
#include <ctime>
#include <cstdlib>
#include "GameEngine.h"
#include "HTForm.h"

using namespace std;

int main(int argc, char* argv[]) {
    
    QApplication app(argc, argv);
    
    HTForm form;
    form.show();
    
    return app.exec();
}

