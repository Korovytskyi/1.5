#include "Date.h"
#include "Triad.h"
#include <Windows.h>
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Triad a;
	a.Read();
	a.incDay();
	cout << a.toString();
	Date a2;
	a2.Init(a);
	a2.Display();
	a2.incDay();
	a2.addDay();
	a2.Display();
	Date a3;
	cout << a2.toString();
}