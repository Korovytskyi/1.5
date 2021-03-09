#pragma once
#include <iostream>
#include <string>
#include <sstream>

using namespace std;
class Triad
{
private:
	int year;
	int month;
	int day;
public:
	void Init(int a, int b, int c);
	void Read();
	void SetYear(int value) { year = abs(value); }
	void SetMonth(int value) { month = abs(value); }
	void SetDay(int value) { day = abs(value); }
	void incYear() { ++year; }
	void incMonth() { ++month; }
	void incDay() { ++day; }
	int GetYear() const { return year; }
	int GetMonth() const { return month; }
	int GetDay() const { return day; }
	void Display() const;
	string toString() const;
};

