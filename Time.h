#pragma once
#include <string>
//#include <ctime>

using namespace std;

class Time
{
	int hour;
	int minute;
	void setHour(int h) {
		if ((h < 0) || (h > 23))
			hour = 0;
		else
			hour = h;
	}
	void setMinute(int m) {
		if ((m < 0) || (m > 59))
			minute = 0;
		else
			minute = m;
	}

public:
	Time() :hour(0), minute(0) {};
	Time(int h, int m){
		this->setHour(h);
		this->setMinute(m);
	};
	int getHour();
	int getMinute();
	void setTime(int h, int m);
	string getAsString();
	int getTotalMinutes();
};
