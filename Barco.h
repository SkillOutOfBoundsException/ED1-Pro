#ifndef BARCO_H
#define BARCO_H
#include <QString>
#include <iostream>

class Barco
{
    public:
        Barco(QString nom);
        Barco* prev;
        Barco* next;
        QString nombre;
};

#endif // BARCO_H
