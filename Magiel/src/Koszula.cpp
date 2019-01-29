#include"Koszula.h"
Koszula::Koszula(float cena,string nazwa ):Ubranie("pogniecione",nazwa,cena), _stanRekawow("pogniecione") {}
void Koszula::PrasujRekawy(Zelazko & ktore)
{
    cout<<"Prasuje 'rekawy "<<_nazwa<<"' zelazkiem o temp. "<<ktore._temperatura<<endl;
    _stanRekawow = "wyprasowane";
}
void Koszula::WypiszWlasciwosci()
{
    cout<<_nazwa<<" - cena: "<<_cena<<". Stan ubrania: "<<_stanUbrania<<", Stan rekawow: "<<_stanRekawow<<endl;
}   

KoszulaBawelniana::KoszulaBawelniana(float cena) : Koszula(cena,"Koszula bawelniana") {}
KoszulaJedwabna::KoszulaJedwabna(float cena ) : Koszula(cena,"Koszula jedwabna") {}
