#ifndef BARCOIMG_H
#define BARCOIMG_H
#include <QString>
#include <iostream>
#include <QGraphicsItem>
#include <QDialog>
#include <QtCore>
#include <QtGui>
#include <QDebug>
#include <QMainWindow>
#include <QtWidgets>

class BarcoImg : public QGraphicsItem{
    //Q_OBJECT
    //Q_PROPERTY(QRectF geometry READ geometry WRITE setGeometry)
public:
    BarcoImg();

    QImage* image;

    int initposx = -200;
    int posx, posy;

    QString nombre;

    void resetBoat();

    QRectF boundingRect() const;
    void paint(QPainter *painter,const QStyleOptionGraphicsItem *option, QWidget *widget);
};

#endif // BARCOIMG_H
