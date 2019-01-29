#include "Odtwarzacze.h"

Odtwarzacze::Odtwarzacze(char napis,string nazwa) : m_napis(napis),m_nazwa(nazwa){}

Komputer::Komputer(char napis) : Odtwarzacze(napis,"komputer"){}

void Komputer::Wyswietl(int szerokosc,int wysokosc)
{

    for(int i = 0; i < wysokosc;i++ )
    {
        for(int j = 0; j < szerokosc;j++)
        {
            cout<<m_napis;
        }
        cout<<endl;
    }

}
OdtwarzaczDVD::OdtwarzaczDVD(char napis) : Odtwarzacze(napis,"DVD"){}
void OdtwarzaczDVD::Wyswietl(int szerokosc,int wysokosc)
{

    for(int i = 0; i < wysokosc;i++ )
    {
        for(int j = 0; j < szerokosc;j++)
        {
            cout<<m_napis;
        }
        cout<<endl;
    }

}