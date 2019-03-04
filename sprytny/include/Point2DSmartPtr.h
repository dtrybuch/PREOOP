#pragma once
#include"Point2D.h"
#include "Point2DAverage.h"
class Point2D;
class Point2DSmartPtr{
    public:
        Point2DSmartPtr(Point2D* ptr);
        Point2D operator*();
        ~Point2DSmartPtr();
    private:
        Point2D *_ptr;
};