#ifndef CBALL_H
#define CBALL_H
#include "cpoint.h"
#include "cpath.h"
#include<QGraphicsItem>
#include<QPainter>
#include<QGraphicsScene>
#include<QPixmap>

using namespace std;


class cBall:public QGraphicsItem
{
public:
    QPixmap ball; //小球图像
    const int r = 16;//半径
    int flag;//球是否飞出;2表示在轨道内
    int color_;//颜色
    cPath paths;
    int time_count = 0;

    qreal dx=0,dy=0;
    qreal angle1=0;
    float rad_=0;

    cBall(qreal angle,QGraphicsScene* scene,int color);//蛤蟆给的构造函数
    cBall(QGraphicsScene* scene);
    cBall(QGraphicsScene* scene,int flags);

    virtual QRectF boundingRect()const; //设置边界
    void paint(QPainter* painter,const QStyleOptionGraphicsItem *option,QWidget *widge);//Scene显示
    void show(){}
    void advance(int phase);

};

#endif // CBALL_H
