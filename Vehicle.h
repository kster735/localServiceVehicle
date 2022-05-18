#pragma once
#include <string>
#include "myDate.h"
#include "Time.h"

using namespace std;

class Vehicle
{
	int refNumber;
	myDate manufDate;
	Time arrTime = Time();
	Time startServ = Time();
	string id;
	string techName;
public:
	Vehicle(int r, string i, string name, int d, int m, int y) :
		refNumber(r), id(i), techName(name) {
		manufDate = myDate(d, m, y);
	};

	int getRefNumber();
	void setRefNumber(int r);
	string getId();
	void setId(string I);
	string getTechName();
	void setTechName(string n);
	myDate getManufDate();
	void setManufDate(int d, int m, int y);
	Time getArrTime();
	void setArrTime(int h, int m);
	Time getStartServ();
	void setStartServ(int h, int m);
	string getAsString();
	int getWaitingTime();
};