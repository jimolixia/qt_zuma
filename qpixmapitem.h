#ifndef QPIXMAPITEM_H
#define QPIXMAPITEM_H
#include"QGraphicsItem"
#include"QPainter"
#include<QPixmap>

class QpixmapItem
{
public:
    QpixmapItem();
    virtual QRectF boundingRect()const;
    void paint(QPainter* painter,const QStyleOptionGraphicsItem *option,QWidget *widge);
    QPixmap pixmap;
};

#endif // QPIXMAPITEM_H
