#include "myDate.h"

myDate::myDate(int d, int m, int y) {
	this->setDay(d);
	this->setMonth(m);
	this->setYear(y);
}

int myDate::getDay() {
	return day;
}

int myDate::getMonth() {
	return month;
}

int myDate::getYear() {
	return year;
}

void myDate::setDay(int d) {
	if ((d < 0) || (d > 30))
		day = 1;
	else
		day = d;
}

void myDate::setMonth(int m) {
	if ((m < 0) || (m > 12))
		month = 1;
	else
		month = m;
}

void myDate::setYear(int y) {
	if ((y < 2013) || (y > 2015))
		year = 2014;
	else
		year = y;
}

string myDate::getAsString() {
	string sdate = "";
	string sd, sm, sy;
	
	sd = to_string(day);
	if (sd.length() < 2) {
		sd = "0" + sd;
	}

	sm = to_string(month);
	if (sm.length() < 2) {
		sm = "0" + sm;
	}

	sy = to_string(year);

	sdate = sd + "/" + sm + "/" + sy;;
	return sdate;
}