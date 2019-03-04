#pragma once
#include<iostream>

class Ksztalt{
    public:
        virtual void wypisz(std::ostream &  ekran) const = 0; 
        virtual float polePow() const = 0;
        virtual ~Ksztalt(){}
};

void wypisz(const Ksztalt &obiekt);
