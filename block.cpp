#include "Block.h"

Block::Block(Barco* barco){
    posx = barco->posx;
    posy = barco->posy;
    nombre = barco->nombre;
}

QRectF Block::boundingRect() const{
    return QRectF(posx,posy,180,50);
}

void Block::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget){
    QRectF rec = boundingRect();
    QFont* font = new QFont("Times [Adobe]", 10, -1, false);
    painter->setFont(*font);
    QBrush brush(QColor(102,194,243));
    painter->fillRect(rec,brush);
    painter->drawRect(rec);

    //painter->drawImage(rec, *image, QRectF(0,0,100,150));
    painter->drawText(QRectF(posx,posy + 13,180, 12), Qt::AlignCenter | Qt::TextWordWrap | Qt::TextDontClip, nombre);
}
