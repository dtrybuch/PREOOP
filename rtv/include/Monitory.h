#pragma once
#include "Odtwarzacze.h"
#include<iostream>
using std::string;
using std::cout;
using std::endl;
class Odtwarzacze;
class Monitory{
    public:
        Monitory(string ramka = "nazwa", int szerokosc = 0, int wysokosc = 0,string nazwa = "nazwa");
        void Wyswietl(Odtwarzacze * obiekt) const;
    protected:
        string m_ramka;
        int m_wysokosc;
        int m_szerokosc;
        string m_nazwa;
};

class Rzutnik : public Monitory{
    public:
        Rzutnik(int szerokosc, int wysokosc);
};

class TelewizorLCD : public Monitory{
    public:
        TelewizorLCD(int szerokosc, int wysokosc);
};