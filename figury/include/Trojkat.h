#pragma once
#include"Ksztalt.h"

class Trojkat : public Ksztalt{
    public:
        Trojkat(int x,int y,int z);
        void wypisz(std::ostream & ekran) const;
        float polePow() const;
    protected:
        int m_x , m_y ,m_z;
};