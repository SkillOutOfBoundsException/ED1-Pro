#include "CanalImg.h"

CanalImg::CanalImg()
{
    image = new QImage("C:\\Users\\Diegu7\\C++Things\\ED1-Pro\\panamacanal.jpg");
}

QRectF CanalImg::boundingRect() const{
    return QRectF(0,0,890,650);
}

void CanalImg::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget){
    QRectF rec = boundingRect();
    QFont* font = new QFont("Times [Adobe]", 10, -1, false);
    painter->setFont(*font);
    //painter->drawRect(rec);
    painter->drawImage(rec, *image, QRectF(0,0,1499,1143));
    //painter->drawText(QRectF(posx,posy + 13,180, 12), Qt::AlignCenter | Qt::TextWordWrap | Qt::TextDontClip, nombre);
}
