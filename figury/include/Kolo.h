#pragma once
#include"Ksztalt.h"

class Kolo : public Ksztalt{
    public:
        Kolo(int r);
        void wypisz(std::ostream & ekran) const;
        float polePow() const;
    protected:
        int m_r;
};