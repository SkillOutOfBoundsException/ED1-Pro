#include "BarcoImg.h"

BarcoImg::BarcoImg()
{
    image = new QImage("C:\\Users\\Diegu7\\C++Things\\ED1-Pro\\boat.png");
    posx = initposx;
    posy = 155;
}

void BarcoImg::resetBoat(){
    posx = initposx;
}

QRectF BarcoImg::boundingRect() const{
    return QRectF(posx,posy,200,100);
}

void BarcoImg::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget){
    QRectF rec = boundingRect();
    QFont* font = new QFont("Times [Adobe]", 10, -1, false);
    painter->setFont(*font);
    //painter->drawRect(rec);
    painter->drawImage(rec, *image, QRectF(0,0,793,391));
    painter->drawText(QRectF(posx,posy + 25,200, 25), Qt::AlignCenter | Qt::TextWordWrap | Qt::TextDontClip, nombre);
}
