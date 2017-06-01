#include "mainwindow.h"
#include "Canal.h"
#include "Barco.h"
#include <QApplication>
#include <QDebug>

int main(int argc, char *argv[]){
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
