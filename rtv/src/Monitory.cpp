#include "Monitory.h"

Monitory::Monitory(string ramka, int szerokosc, int wysokosc,string nazwa) : m_ramka(ramka), m_wysokosc(wysokosc), m_szerokosc(szerokosc),m_nazwa(nazwa){}
void Monitory::Wyswietl(Odtwarzacze * obiekt) const
{
    cout<<"Polaczono "<<m_nazwa<<" i "<< obiekt->m_nazwa<<endl;
    cout<<m_ramka<<endl;
    obiekt->Wyswietl(m_szerokosc,m_wysokosc);
    cout<<m_ramka<<endl;
}

Rzutnik::Rzutnik(int szerokosc, int wysokosc) : Monitory("_ _ _ _ _ _ _ _",szerokosc,wysokosc,"rzutnik"){}
TelewizorLCD::TelewizorLCD(int szerokosc, int wysokosc) : Monitory("- - - - - - - -",szerokosc,wysokosc,"telewizor"){}