#include"Kolo.h"

Kolo::Kolo(int r):m_r(r){}

void Kolo::wypisz(std::ostream & ekran) const
{
    ekran<<"Kolo o promieniu:"<<m_r<<std::endl;
}
float Kolo::polePow() const
{
    return 3.1415*m_r*m_r;
}