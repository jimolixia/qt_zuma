#include "cpath.h"
#include<cmath>
#include<QDebug>

cPath::cPath(int id)
{
    double arg=0;
    int s1=1120;
    int s2=s1+180;
    int s3=s2+935;
    int s4=s3+90;
    int s5=s4+555;
    int s6=s5+90;
    int s7=s6+933;
    int s8=s7+90;
    int s9=s8+458;
    int s10=s9+90;
    int s11=s10+813;
    int s12=s11+90;
    int s13=s12+370;
    int s14=s13+90;
    int s15=s14+695;
    int s16=s15+90;
    int s17=s16+290;
    m_end = s17;
    move_x.resize(10000);
    move_y.resize(10000);
    if(id==1){//第一级
        int i;
        for(i =0;i<s1;++i){
            move_x[i] = -1;
            move_y[i] = 0;
        }
        for(;i<s2;++i){
            arg=(180+(i-s1))/180.0*3.14;
            move_x[i] = cos(arg)*0.92;
            move_y[i] = -sin(arg)*0.92;
        }
        for(i;i<s3;++i){
            move_x[i] = 1;
            move_y[i] = 0;
        }
        for(;i<s4;++i){
            arg=(180+i-s3)/180.0*3.14;
            move_x[i] = -cos(arg)*0.92;
            move_y[i] = -sin(arg)*0.92;
        }
        for(;i<s5;++i){
            move_x[i] = 0;
            move_y[i] = 1;
        }
        for(;i<s6;++i){
            arg=(270+i-s5)/180.0*3.14;
            move_x[i] = -cos(arg)*0.92;
            move_y[i] = -sin(arg)*0.92;
        }
        for(;i<s7;++i){
            move_x[i] = -1;
            move_y[i] = 0;
        }
        for(;i<s8;++i){
            arg=(i-s7)/180.0*3.14;
            move_x[i] = -cos(arg)*0.92;
            move_y[i] = -sin(arg)*0.92;
        }
        for(;i<s9;++i){
            move_x[i] = 0;
            move_y[i] = -1;
        }
        for(;i<s10;++i){
            arg=(90+i-s9)/180.0*3.14;
            move_x[i] = -cos(arg)*0.92;
            move_y[i] = -sin(arg)*0.92;
        }
        for(;i<s11;++i){
            move_x[i] = 1;
            move_y[i] = 0;
        }
        for(;i<s12;++i){
            arg=(180+i-s11)/180.0*3.14;
            move_x[i] = -cos(arg)*0.92;
            move_y[i] = -sin(arg)*0.92;
        }
        for(;i<s13;++i){
            move_x[i] = 0;
            move_y[i] = 1;
        }
        for(;i<s14;++i){
            arg=(270+i-s13)/180.0*3.14;
            move_x[i] = -cos(arg)*0.92;
            move_y[i] = -sin(arg)*0.92;
        }
        for(;i<s15;++i){
            move_x[i] = -1;
            move_y[i] = 0;
        }
        for(;i<s16;++i){
            arg=(i-s15)/180.0*3.14;
            move_x[i] = -cos(arg)*0.92;
            move_y[i] = -sin(arg)*0.92;
        }
        for(;i<s17;++i){
            move_x[i] = 0;
            move_y[i] = -1;
        }
    }
}
