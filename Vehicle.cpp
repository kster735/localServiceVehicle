#include "Vehicle.h"

int Vehicle::getRefNumber() {
	return refNumber;
}

void Vehicle::setRefNumber(int r) {
	refNumber = r;
}

string Vehicle::getId() {
	return id;
}
void Vehicle::setId(string I) {
	id = I;
}

string Vehicle::getTechName() {
	return techName;
}

void Vehicle::setTechName(string n) {
	techName = n;
}

myDate Vehicle::getManufDate() {
	return manufDate;
}

void Vehicle::setManufDate(int d, int m, int y) {
	manufDate = myDate::myDate(d, m, y);
}

Time Vehicle::getArrTime() {
	return arrTime;
}

void Vehicle::setArrTime(int h, int m) {
	arrTime = Time::Time(h, m);
}

Time Vehicle::getStartServ() {
	return startServ;
}

void Vehicle::setStartServ(int h, int m) {
	startServ = Time::Time(h, m);
}

string Vehicle::getAsString() {
	string svehicle = "";
	string sr, si, stn, smnfd;

	sr = to_string(refNumber);

	si = id;

	stn = techName;

	smnfd = manufDate.getAsString();

	svehicle = "refNumber: " + sr + ", id: " + si + ", techName: " + stn + ", manufDate: " + smnfd;

	return svehicle;
}


int Vehicle::getWaitingTime() {
	// returns total waiting time in minutes
	return startServ.getTotalMinutes() - arrTime.getTotalMinutes();
}
