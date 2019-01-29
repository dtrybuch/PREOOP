#include"Zelazko.h"
using std::string; using std::cout; using std::endl;
Zelazko::Zelazko(string nazwa, float cena, int temperatura):_nazwa(nazwa),_cena(cena),_temperatura(temperatura){}

void Zelazko::UstawTemperature(int temperatura)
{
    _temperatura = temperatura;
}
void Zelazko::WypiszWlasciwosci()
{
    cout<<_nazwa<<" - cena: "<<_cena<<". temperatura: "<<_temperatura<<endl;
}
//////////////////////////////////////////////////////////////////////
ZelazkoZelmer::ZelazkoZelmer(int cena): Zelazko("Zelazko Zelmer",cena){}
ZelazkoTefal::ZelazkoTefal(int cena): Zelazko("Zelazko Tefal",cena){}