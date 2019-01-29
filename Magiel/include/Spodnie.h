#pragma once
#include"Ubranie.h"
using std::string;using std::cout;using std::endl;
class Ubranie;
class Spodnie : public Ubranie{
    protected:
        string _stanNogawek;
    public:
        void WypiszWlasciwosci();
        Spodnie(float cena, string nazwa);
        void PrasujNogawki(Zelazko & ktore);
};
class SpodnieBawelniane : public Spodnie{
    public:
       SpodnieBawelniane(float cena = 0);
};
class SpodnieJedwabne : public Spodnie{
    public:
        SpodnieJedwabne(float cena = 0);
};