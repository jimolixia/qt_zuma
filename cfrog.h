#ifndef CFROG_H
#define CFROG_H
#include <qwidget.h>
#include "cpoint.h"
#include "cball.h"
#include "QMouseEvent"
#include "qcursor.h"
#include "cmath"
#include"QGraphicsItem"
#include"QPainter"
using namespace std;


class cFrog:public QGraphicsItem
{
public:
    cPoint frog1;
    int speed=10;//射出速度
    cBall*ballReady;//第一个球
    cBall*ballPrepare;//第二个球
    float rotateAngle = 0;
    //cBall ballPrepare,ballReady;
    QPixmap frog;
//    void updateFrog(int mouse_x, int mouse_y){//需要在调用时获取鼠标相对窗口位置作为参数
//        float delta_x = mouse_x - frog.x;
//        float delta_y = mouse_y - frog.y;
//        float delta_l = sqrt(delta_x*delta_x+delta_y*delta_y);
//        rotateAngle = atan2(-delta_y, delta_x);
//        *ballPrepare.center.x = frog.x - 28*cos(rotateAngle);
//        *ballPrepare.center.y = frog.y - 28*sin(rotateAngle);
//        *ballReady.center.x = frog.x + 28*cos(rotateAngle);
//        *ballReady.center.y = frog.y + 28*sin(rotateAngle);
//    }
//    void reverseBall(){//右键交换小球
////        int tmpColor;
////        tmpColor = ballPrepare.color;
////        ballPrepare.color = ballReady.color;
////        ballReady.color = tmpColor;
//        Cball*p;
//        p=ballReady;
//        ballReady=ballPrepare;
//        ballPre=p;
//        delete p;
//    }
    void shootBall(){
        //不太好写啊（）

    }
    virtual QRectF boundingRect()const;
    void paint(QPainter* painter,const QStyleOptionGraphicsItem *option,QWidget *widge);
    cFrog();
};

#endif // CFROG_H
