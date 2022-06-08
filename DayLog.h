#pragma once
#include <string>
#include <vector>
#include <ctime>
#include "Vehicle.h"
#include "myDate.h"
#include <iostream>

using namespace std;

class DayLog
{
public:
	myDate logDate;
	int noOfArrivals;
	vector<Vehicle> waitingList;
	vector<Vehicle> serviceList;

	DayLog(): noOfArrivals(0) {
		time_t result = time(nullptr);
		tm* datetime = localtime(&result);
		int d = datetime->tm_mday;
		int m = datetime->tm_mon;
		int y = datetime->tm_year + 1900;
		logDate = myDate(d, m, y);
	}

	void addVehicle(int rfNumb, string Id, string tchNm, int day, int mon, int yr, int hr, int min);

	int getArrived();

	int getNumberWaiting();

	int findWaitingPosition(Vehicle v);

	void serviceVehicle(Vehicle v, int h, int m);
};

