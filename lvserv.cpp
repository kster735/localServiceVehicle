#include <iostream>
#include "Vehicle.h"
#include "DayLog.h"
#include "Time.h"
#include "myDate.h"

using namespace std;

int main()
{
    DayLog dl = DayLog();

    dl.addVehicle(23, "IXK5698", "Dimitris Katsogiannis", 18, 5, 2022, 10, 40);
    dl.addVehicle(29, "IBK5698", "Dimitris Katsogiannis", 18, 5, 2022, 10, 43);
    dl.addVehicle(23, "IXK5698", "Dimitris Katsogiannis", 19, 5, 2022, 12, 20);
   
    for (auto w : dl.waitingList) {
        cout << w.getAsString() << endl;
    }

    cout << endl <<"Servicing first car ...." << endl<<endl;

    size_t s = dl.waitingList.size();
    dl.serviceVehicle(dl.waitingList[s-1], 10,45);


    for (auto w : dl.waitingList) {
        cout << w.getAsString() << endl;
    }

    cout << endl << "Service list..." << endl << endl;

    for (auto w : dl.serviceList) {
        cout << w.getAsString() << endl;
    }
}
