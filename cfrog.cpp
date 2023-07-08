#include "cfrog.h"

cFrog::cFrog()
{
    frog.load(":/processed/frog.png");
}
QRectF cFrog::boundingRect() const
{
    return QRectF(0,0,frog.width(),frog.height());
}
void cFrog::paint(QPainter* painter,const QStyleOptionGraphicsItem *option,QWidget *widge)
{
    painter->drawPixmap(0,0,frog);
}
