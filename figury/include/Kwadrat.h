
#pragma once
#include"Ksztalt.h"

class Kwadrat:public Ksztalt{
    public:
        Kwadrat(int x);
        void wypisz(std::ostream & ekran) const;
        float polePow() const;
    protected:
        int m_x;
};