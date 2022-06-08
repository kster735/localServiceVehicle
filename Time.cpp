#include "Time.h";

int Time::getHour() {
	return hour;
}

int Time::getMinute() {
	return minute;
}

void Time::setTime(int h, int m) {
	setHour(h);
	setMinute(m);
}

string Time::getAsString() {
	string stime="";
	string sh, sm;
	sh = to_string(hour);
	if (sh.length() < 2) {
		sh = "0" + sh;
	}
	sm = to_string(minute);
	if (sm.length() < 2) {
		sm = "0" + sm;
	}
	stime = sh + ":" + sm;
	return stime;
}

int Time::getTotalMinutes() {
	return hour * 60 + minute;
}

