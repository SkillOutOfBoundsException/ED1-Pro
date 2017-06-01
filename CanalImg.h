#ifndef CANALIMG_H
#define CANALIMG_H
#include <QString>
#include <iostream>
#include <QGraphicsItem>
#include <QDialog>
#include <QtCore>
#include <QtGui>
#include <QDebug>
#include <QMainWindow>
#include <QtWidgets>

class CanalImg : public QGraphicsItem{
public:
    CanalImg();

    QImage* image;
    QRectF boundingRect() const;
    void paint(QPainter *painter,const QStyleOptionGraphicsItem *option, QWidget *widget);
};

#endif // CANALIMG_H
