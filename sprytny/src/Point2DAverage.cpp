#include"Point2DAverage.h"
int Point2DAverage::counter = 1;
float Point2DAverage::x = 0;
float Point2DAverage::y = 0;
Point2D Point2DAverage::operator()(Point2D & obiekt)
{
    float pierwsza = (x+obiekt._x)/counter;
    float druga = (y+obiekt._y)/counter;
    x += obiekt._x;
    y += obiekt._y;
    counter++;
    return  Point2D(pierwsza,druga);;
}
void Point2DAverage::Reset()
{
    x = 0;
    y = 0;
    counter = 1;
}