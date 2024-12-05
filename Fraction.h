#pragma once
class Fraction
{
private:
	double numerator;
	double denuminator;
public:
	double getNumerator();
	double getDenuminator();
	Fraction();
	Fraction(double n, double d);
	double operator+(Fraction fr);
	double operator-(Fraction fr);
	double operator*(Fraction fr);
	double operator/(Fraction fr);
};

