#include"Kwadrat.h"

Kwadrat::Kwadrat(int x):m_x(x){}

void Kwadrat::wypisz(std::ostream & ekran) const
{
    ekran<<"Kwadrat o boku:"<<m_x<<std::endl;
}
float Kwadrat::polePow() const
{
    return m_x*m_x;
}