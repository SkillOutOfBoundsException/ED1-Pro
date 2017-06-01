#ifndef BLOCK_H
#define BLOCK_H
#include <QString>
#include <iostream>
#include <QGraphicsItem>
#include <QDialog>
#include <QtCore>
#include <QtGui>
#include <QDebug>
#include <QMainWindow>
#include <QtWidgets>
#include "Barco.h"

class Block : public QGraphicsItem{
public:
    Block(Barco* barco);

    int posx, posy;
    QString nombre;

    QRectF boundingRect() const;
    void paint(QPainter *painter,const QStyleOptionGraphicsItem *option, QWidget *widget);
};

#endif // BLOCK_H
