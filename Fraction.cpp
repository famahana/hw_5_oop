#include "Fraction.h"
#include <iostream>
using namespace std;

double Fraction::getNumerator()
{
	return numerator;
}
double Fraction::getDenuminator()
{
	return denuminator;
}
Fraction::Fraction() = default;
Fraction::Fraction(double n, double d)
{
	numerator = n;
	denuminator = d;
}
double Fraction::operator+(Fraction fr)
{
	return (fr.numerator / fr.denuminator) + (this->numerator / this->denuminator);
}
double Fraction::operator-(Fraction fr)
{
	return (fr.numerator / fr.denuminator) - (this->numerator / this->denuminator);
}
double Fraction::operator*(Fraction fr)
{
	return (fr.numerator / fr.denuminator) * (this->numerator / this->denuminator);
}
double Fraction::operator/(Fraction fr)
{
	return (fr.numerator / fr.denuminator) / (this->numerator / this->denuminator);
}

