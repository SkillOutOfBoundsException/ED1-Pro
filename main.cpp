#include "mainwindow.h"
#include "Canal.h"
#include "Barco.h"
#include <QApplication>

Canal* rip = new Canal();

int main(int argc, char *argv[]){

    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
