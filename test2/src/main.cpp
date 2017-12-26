/**
 * @file /src/main.cpp
 *
 * @brief Qt based gui.
 *
 * @date November 2010
 **/

#include <QtGui>
#include <QApplication>
#include "../include/test2/main_window.hpp"
//#include "../include/test2/manualdialog.h"
int main(int argc, char **argv) {
    QApplication app(argc, argv);
    test2::MainWindow w(argc,argv);
    w.show();
    w.showNormal();
    //test2::ManualDialog dlg_m;
    app.connect(&app, SIGNAL(lastWindowClosed()), &app, SLOT(quit()));
    int result = app.exec();

  return result;
}
