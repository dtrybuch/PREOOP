#pragma once
#include"Ubranie.h"
using std::string;using std::cout;using std::endl;
class Ubranie;
class Koszula : public Ubranie{
    protected:
        string _stanRekawow;
    public:
        void WypiszWlasciwosci();
        Koszula(float cena, string nazwa);
        void PrasujRekawy(Zelazko & ktore);
};
class KoszulaBawelniana : public Koszula{
    public:
        KoszulaBawelniana(float cena = 0);
};
class KoszulaJedwabna : public Koszula{
    public:
        KoszulaJedwabna(float cena = 0);
};