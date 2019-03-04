#pragma once
#include<iostream>

class Rational {
private:
	int _licznik;
	int _mianownik;
public:
	friend class Complex;
	Rational(int licznik, int mianownik);
	operator double();
	void Print();
};
//*mnozenie liczb zespolonych : (a*c - b * d) + i(a*d + b * c)