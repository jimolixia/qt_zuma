#include "cball.h"
#include <QRandomGenerator>


cBall::cBall(qreal angle,QGraphicsScene* scene,int color)
{
    color_=color;
    angle1=angle;
    char filename[50]="0";
    sprintf(filename,":/processed/ball%d.png",color);

    flag=0;
    ball.load(filename);
    float rad=angle*3.14/180;
    rad_=rad;
    dx=40*cos(rad);
    dy=40*sin(rad);
}

cBall::cBall(QGraphicsScene* scene):paths(cPath(1)){
    color_ = QRandomGenerator::global()->bounded(6) + 1;
    flag = 2;
    char filename[50]="0";
    sprintf(filename,":/processed/ball%d.png",color_);//设置颜色
    ball.load(filename);//加载图片文件
}

cBall::cBall(QGraphicsScene* scene,int flags):paths(cPath(1)){
    color_ = QRandomGenerator::global()->bounded(6) + 1;
    flag = flags;
    char filename[50]="0";
    sprintf(filename,":/processed/ball%d.png",color_);//设置颜色
    ball.load(filename);//加载图片文件
}

QRectF cBall::boundingRect() const
{

    QPainterPath path;
    path.addEllipse(QPointF(ball.width() / 2.0, ball.height() / 2.0), ball.width() / 2.0, ball.width() / 2.0);
    return path.boundingRect();
}

void cBall::paint(QPainter* painter,const QStyleOptionGraphicsItem *option,QWidget *widge)
{
    painter->drawPixmap(0,0,ball);
}

void cBall::advance(int phase) //用于更新球的位置
{

    if(flag==1){
        this->setPos(mapToScene(5*cos(rad_),-5*sin(rad_)));//setPos()方法是cBall类继承自QGraphicsItem类的方法，用于设置物体在场景中的位置;mapToScene()方法是将球的当前位置转换为场景坐标系中的位置。
        if(this->x()<0||this->x()>630||this->y()<0||this->y()>630){
            delete this;
            return;
        }
    }
    if(flag==2&&time_count%4==0){//按照路径走
    if(paths.m_num!=paths.m_end){
        this->setPos(mapToScene(paths.move_x[paths.m_num++],paths.move_y[paths.m_num++]));
        //this->setPos(mapToScene(-5,0));
        if(this->paths.m_num>=this->paths.m_end){

        }
    }
    }

    if(flag==3&&time_count%4==0){
        this->setPos(mapToScene(paths.move_x[0],paths.move_y[0]));
        if(this->x()<625){
            flag=2;
        }
    }

    (time_count++)%10000;
}
