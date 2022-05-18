#pragma once
#include <string>
#include <vector>
#include <ctime>
#include "Vehicle.h"
#include "myDate.h";
#include <iostream>

using namespace std;

class DayLog
{
	myDate logDate;
	int noOfArrivals;
	vector<Vehicle> waitingList;
	vector<Vehicle> serviceList;
public:
	DayLog(): noOfArrivals(0) {
		time_t result = time(nullptr);
		tm* datetime = localtime(&result);
		int d = datetime->tm_mday;
		int m = datetime->tm_mon;
		int y = datetime->tm_year + 1900;
		logDate = myDate(d, m, y);
	}

	myDate getLogDate() {
		return logDate;
	}
};

