//
// Created by magom on 08.12.2019.
//

#ifndef OOP7_POINT_H
#define OOP7_POINT_H

#include <iostream>

struct point {
    double x, y;
    point (double  a,double b) { x = a, y = b;};
    point() = default;
};
std::istream& operator >> (std::istream& is,point& p );
std::ostream& operator << (std::ostream& os,const point& p);
point operator-(point l, point r);
double VectNorm(point l, point r);
double VectProd(point l, point r);
double ScalProd(point l, point r);
double TrAngle(point a, point b, point c);

#endif //OOP7_POINT_H
