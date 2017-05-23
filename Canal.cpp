#include "Canal.h"
#include <QDebug>

Canal::Canal(){
    cola = 0;
    entrada = 0;
    cant = 0;
}

void Canal::recibirBarco(Barco* nuevo){
    if(cola == 0){
        entrada = nuevo;
        cola = nuevo;
        cant = 1;
    }
    else{
        nuevo->prev = entrada;
        entrada->next = nuevo;
        entrada = nuevo;
        cant++;
    }
}

Barco* Canal::pasarBarco(){
    if(cola == 0)
        return 0;
    else if(entrada == cola){
        Barco* temp = cola;
        cola = 0;
        entrada = 0;
        cant = 0;
        return temp;
    }
    else{
        Barco* temp = cola;
        cola = temp->next;
        temp->next = 0;
        cola->prev = 0;
        cant--;
        return temp;
    }
}

void Canal::printBarcos(){
    qDebug() << "Lista de barcos->";
    Barco* temp = cola;
    for(int i = 0; i < cant; i++){
        qDebug() << "-" << temp->nombre;
        temp = temp->next;
    }
}

void Canal::vaciarCanal(){
    qDebug() << "Vaciado canal->";
    int c = cant;
    for(int i = 0; i < c; i++)
        qDebug() << "-El barco " << pasarBarco()->nombre << " ha pasado el canal.";
}

bool Canal::isEmpty(){
    return cola == 0;
}
