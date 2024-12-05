#include "Fraction.h"
#include <iostream>
using namespace std;

int main()
{
	Fraction fr1 = { 3,6 };
	Fraction fr2 = { 3,7 };
	cout << fr1 - fr2 << endl;
	cout << fr1 + fr2 << endl;
	cout << fr1 * fr2 << endl;
	cout << fr1 / fr2 << endl;

	return 0;
}