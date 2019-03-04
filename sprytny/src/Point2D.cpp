#include"Point2D.h"

Point2D::Point2D(float x, float y) : _x(x),_y(y){}
//////////////////////////////////////////////////////

/////////////////////////////////////////////////////
Point2D& Point2D::operator--()
 {
    _x-=1;
    _y-=1;
    return *this;
 }
//////////////////////////////////////////////////////
Point2D Point2D::operator++(int)
 {
    Point2D kopia;
    kopia = (*this);
    _x+=1;
    _y+=1;
    return kopia;
 }
 ////////////////////////////////////////////////////
 Point2D Point2D::operator+(Point2D &obiekt)
 {
    return Point2D(_x + obiekt._x,_y + obiekt._y);
 }
/////////////////////////////////////////////////////
std::ostream & operator<<(std::ostream& ekran,Point2D obiekt)
{
    ekran<<"("<<obiekt._x<<","<<obiekt._y<<")";
    return ekran;
}
/////////////////////////////////////////////////////
Point2D operator+(float liczba,Point2D &obiekt)
{
    return Point2D(obiekt._x+liczba,obiekt._y+liczba);
}