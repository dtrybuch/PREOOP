#include "Spodnie.h"

Spodnie::Spodnie(float cena, string nazwa):Ubranie("pogniecione",nazwa,cena), _stanNogawek("pogniecione") {}
void Spodnie::PrasujNogawki(Zelazko & ktore)
{
    cout<<"Prasuje 'nogawki "<<_nazwa<<"' zelazkiem o temp. "<<ktore._temperatura<<endl;
    _stanNogawek = "wyprasowane";
}
void Spodnie::WypiszWlasciwosci()
{
    cout<<_nazwa<<" - cena: "<<_cena<<". Stan ubrania: "<<_stanUbrania<<", Stan nogawek: "<<_stanNogawek<<endl;
}   

SpodnieBawelniane::SpodnieBawelniane(float cena) :Spodnie(cena, "Spodnie bawelniane") {}
SpodnieJedwabne::SpodnieJedwabne(float cena ) : Spodnie(cena, "Spodnie jedwabne") {}