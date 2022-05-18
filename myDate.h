#pragma once
#include <string>

using namespace std;

class myDate
{
	int day;
	int month;
	int year;
public:
	myDate() : day(1), month(1), year(2014) {};
	myDate(int d, int m, int y);
	int getDay();
	int getMonth();
	int getYear();
	void setDay(int d);
	void setMonth(int m);
	void setYear(int y);
	string getAsString();
};

