#ifndef BARCO_H
#define BARCO_H
#include <QString>
#include <iostream>

class Barco{
    public:
        Barco(QString nom);
        Barco* prev;
        Barco* next;
        QString nombre;

        void setPos(int x, int y);
        int posy;
        int posx;
};

#endif // BARCO_H
