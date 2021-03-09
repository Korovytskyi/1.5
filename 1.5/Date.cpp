#include "Date.h"

void Date::Init(Triad value)
{
	this->date = value;
	Stabilizer();
}
void Date::incYear()
{
	date.SetYear(date.GetYear() + 1);
	YearConverter();
}
void Date::incMonth()
{
	date.SetMonth(date.GetMonth() + 1);
	MonthConverter();
}
void Date::incDay()
{
	date.SetDay(date.GetDay());
	DayConverter();
}
void Date::Display() const
{
	cout << date.GetYear() + 1 << " year " << date.GetMonth() + 1 << " month " << date.GetDay() << " day " << endl;
}
void Date::SetYear(int value)
{
	date.SetYear(date.GetYear() + value);
	YearConverter();
}
void Date::YearConverter()
{
	if (date.GetYear() >= 10000)
		date.SetYear(date.GetYear() % 10000);
}
void Date::SetMonth(int value)
{
	date.SetMonth(date.GetMonth() + value);
	MonthConverter();
}
void Date::MonthConverter()
{
	while (date.GetMonth() >= 12)
	{
		date.SetMonth(date.GetMonth() - 12);
		incYear();
	}
}
void Date::SetDay(int value)
{
	date.SetDay(date.GetDay() + value);
	DayConverter();
}
void Date::DayConverter()
{
	while (date.GetDay() >= 30)
	{
		date.SetDay(date.GetDay() - 30);
		incMonth();
	}
}

void Date::addDay()
{
	int value;
	cout << "dodatu dniv "; cin >> value;
	date.SetDay(date.GetDay() + value);
	Stabilizer();
}

string Date::toString() const
{
	stringstream sout;
	sout << "number 1: " << date.GetYear() << ", number 2: " << date.GetMonth() << ", number 3: " << date.GetDay() - 1 << endl;
	return sout.str();
}
void Date::Stabilizer()
{
	DayConverter();
	MonthConverter();
	YearConverter();
}
