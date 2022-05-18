#include <iostream>
#include "Vehicle.h"
#include "DayLog.h"
#include "Time.h"
#include "myDate.h"

using namespace std;

int main()
{
   /* myDate  date = myDate(3, 4, -2016);
    cout << date.getAsString() << endl;*/

    DayLog dl = DayLog();

    cout << dl.getLogDate().getYear() << endl;;
}
