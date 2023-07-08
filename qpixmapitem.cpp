#include "qpixmapitem.h"

QpixmapItem::QpixmapItem(const QString &filename)
{
    pixmap.load()
}

virtual QRectF boundingRect()const;
void paint(QPainter* painter,const QStyleOptionGraphicsItem *option,QWidget *widge);
