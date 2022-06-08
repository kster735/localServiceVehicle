#include "DayLog.h"
#include "Vehicle.h"

void DayLog::addVehicle(int rfNumb, string Id, string tchNm, int day, int mon, int yr, int hr, int min) {
	Vehicle car = Vehicle(rfNumb, Id, tchNm, day, mon, yr);
	car.setArrTime(hr, min);
	++noOfArrivals;
	waitingList.push_back(car);
}

int DayLog::getArrived() {
	return noOfArrivals;
}

int DayLog::getNumberWaiting() {
	return waitingList.size();
}

int DayLog::findWaitingPosition(Vehicle v) {
	int pos=0;
	vector<Vehicle>::iterator w;

	for (w = waitingList.begin(); w != waitingList.end(); ++w) {
		if (w->getId() == v.getId()) {
			return pos;
		}
		++pos;
	}
	return -1;
}

void DayLog::serviceVehicle(Vehicle v, int h, int m) {
	int waitPos = findWaitingPosition(v);
	if (waitPos != -1) {
		Vehicle temp = Vehicle();
		temp = waitingList[waitPos];
		temp.setStartServ(h, m);
		auto wit = waitingList.begin() + waitPos;
		waitingList.erase(wit);
		serviceList.push_back(temp);
	}
}