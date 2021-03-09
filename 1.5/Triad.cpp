#include "Triad.h"
void Triad::Init(int a, int b, int c)
{
	year = abs(a);
	month = abs(b);
	day = abs(c);
}
void Triad::Read()
{
	int a, b, c;
	cout << "Enter number 1: "; cin >> a;
	cout << "Enter number 2: "; cin >> b;
	cout << "Enter number 3: "; cin >> c;
	Init(a, b, c);
}
string Triad::toString() const
{
	stringstream sout2;
	sout2 << "number 1: " << year + 1 << ", number 2: " << month + 1 << ", number 3: " << day << endl;
	return sout2.str();
}
void Triad::Display() const
{
	cout << "number 1: " << year << ", number 2: " << month << ", number 3: " << day << endl;
}