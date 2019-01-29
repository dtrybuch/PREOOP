#include"Ubranie.h"

Ubranie::Ubranie(string stanUbrania,string nazwa, float cena):_stanUbrania(stanUbrania),_nazwa(nazwa),_cena(cena){}

void Ubranie::Prasuj(Zelazko & ktore)
{
    cout<<"Prasuje '"<<_nazwa<<"' zelazkiem o temp. "<<ktore._temperatura<<endl;
    _stanUbrania = "wyprasowane";
}
 void Ubranie::Pogniec()
 {
     _stanUbrania = "pogniecone";
 }
 void Ubranie::WypiszWlasciwosci()
{
    cout<<_nazwa<<" - cena: "<<_cena<<". Stan ubrania: "<<_stanUbrania <<endl;
}   
