#pragma once
#include "Rational.h"

class Complex {
private:
	float _x;
	float _y;
public:
	Complex(float x, float y);
	Complex(float x);
	void Print();
	explicit operator double();
	float Im();
	static float Modulo(Complex &obiekt);
	Complex operator+(Complex &obiekt);
	Complex operator+(double liczba);
	Complex operator*(Rational & obiekt);
};