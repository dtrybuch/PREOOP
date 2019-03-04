#pragma once
#include"Point2D.h"

class Point2DAverage{
    public:
        Point2D operator()(Point2D & obiekt);
        void Reset();
        static int counter;
        static float x;
        static float y;
};
