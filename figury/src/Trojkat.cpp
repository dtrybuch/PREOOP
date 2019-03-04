#include"Trojkat.h"
#include"math.h"
Trojkat::Trojkat(int x, int y, int z ):m_x(x),m_y(y),m_z(z){}

void Trojkat::wypisz(std::ostream & ekran) const
{
    ekran<<"Trojkat bokach:"<<m_x<<" "<<m_y<<" "<<m_z<<std::endl;
}
float Trojkat::polePow() const
{
    float obwod = m_x + m_y + m_z;
    float polObw = obwod/2;
    std::cout<<polObw<<std::endl;
    return sqrt(polObw*(polObw - m_x)*(polObw - m_y)*(polObw - m_z));
}