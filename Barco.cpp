#include "Barco.h"

Barco::Barco(QString nom){
    nombre = nom;
    prev = 0;
    next = 0;
}

void Barco::setPos(int x, int y){
    posx = x;
    posy = y;
}


