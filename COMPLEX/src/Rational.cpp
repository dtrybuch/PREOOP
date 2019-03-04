#include "Rational.h"

Rational::Rational(int licznik, int mianownik):_licznik(licznik),_mianownik(mianownik){}

void Rational::Print()
{
	std::cout << _licznik << "/" << _mianownik << std::endl;
}
Rational::operator double()
{
	return (double)_licznik / _mianownik;
}