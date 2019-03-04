#include "Complex.h"
#include<math.h>
Complex::Complex(float x, float y):_x(x),_y(y){}
Complex::Complex(float x):_x(x),_y(0){}
void Complex::Print()
{
	std::cout << _x << "+i" << _y << std::endl;
}
Complex::operator double()
{
	return _x;
}
float Complex::Im()
{
	return _y;
}
float Complex::Modulo(Complex &obiekt)
{
	return sqrt(obiekt._x * obiekt._x + obiekt._y * obiekt._y);
}
Complex Complex::operator+(Complex &obiekt)
{
	Complex nowy(0, 0);
	nowy._x = _x + obiekt._x;
	nowy._y = _y + obiekt._y;
	return nowy;
}
Complex Complex::operator+(double liczba)
{
	Complex nowy(0, _y);
	nowy._x = _x + liczba;
	return nowy;
}
Complex Complex::operator*(Rational & obiekt)
{
	Complex nowy(_x, _y);
	nowy._x = (double)obiekt._licznik / obiekt._mianownik * _x;
	nowy._y = (double)obiekt._licznik / obiekt._mianownik * _y;
	return nowy;
}