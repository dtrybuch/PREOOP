#pragma once
#include<iostream>
using std::cout;
using std::endl;
class Point2D{
    public:
        friend std::ostream & operator<<(std::ostream& ekran,Point2D obiekt);
        friend Point2D operator+(float liczba,Point2D &obiekt);
        friend class Point2DAverage;
        Point2D(float x, float y);
        Point2D() = default;
        Point2D &operator--();
        Point2D operator++(int);
        Point2D operator+(Point2D &obiekt);
    private:
        float _x;
        float _y;

};
std::ostream & operator<<(std::ostream& ekran,Point2D obiekt);
Point2D operator+(float liczba,Point2D &obiekt);
