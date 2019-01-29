#pragma once
#include<iostream>
#include"Zelazko.h"
using std::string;using std::cout;using std::endl;
class Zelazko;
class Ubranie{
    protected:
        string _stanUbrania;
        string _nazwa;
        float _cena;
    public:
        Ubranie(string _stanUbrania = "pogniecione",string nazwa = "nazwa",float cena = 0);
        void Prasuj(Zelazko & ktore);
         void WypiszWlasciwosci();
        void Pogniec();
};