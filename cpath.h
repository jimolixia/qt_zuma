#ifndef CPATH_H
#define CPATH_H
#include "cpoint.h"
#include <vector>
#include "cmath"

using namespace std;


class cPath
{
public:

    vector<double>move_x;
    vector<double>move_y;
    int m_num=0;//标记此刻位置
    int m_end=10000;//标记结尾位置
    cPath(int id=1);

};

#endif // CPATH_H
