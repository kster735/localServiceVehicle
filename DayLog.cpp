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

size_t DayLog::getNumberWaiting() {
	return waitingList.size();
}

int DayLog::findWaitingPosition(Vehicle v) {
	int pos=0;
	for (auto& w : waitingList) {
		if (w.getId() == v.getId()) {
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
		vector<Vehicle>::iterator wit = waitingList.begin() + waitPos;
		waitingList.erase(wit);
		serviceList.push_back(temp);
	}
}