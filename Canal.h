#ifndef CANAL_H
#define CANAL_H
#include "Barco.h"

class Canal{
    public:
        Canal();
        void recibirBarco(Barco*);
        Barco* pasarBarco();
        Barco* getAt(int);
        void vaciarCanal();
        bool isEmpty();
        void printBarcos();
        Barco* cola;
        Barco* entrada;
        int cant;
};
#endif // CANAL_H
