// Расчет звонков с посекундной тарификации.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    const float tariff = 0.15 / 60;
    float price;
    int hours, hours_end, mins, mins_end, secs, secs_end, total_secs, total_secs_end, final_time;

    cout << "When did you start the phone call?" << endl;
    cout << "Hours: ";
    cin >> hours;
    cout << "Minutes: ";
    cin >> mins;
    cout << "Seconds: ";
    cin >> secs;

    cout << "When did you end the phone call?" << endl;
    cout << "Hours: ";
    cin >> hours_end;
    cout << "Minutes: ";
    cin >> mins_end;
    cout << "Seconds: ";
    cin >> secs_end;

    if (hours > 23 || hours_end > 23 || mins > 59 || mins_end > 59 || secs > 59 || secs_end > 59) {
        cout << "Incorrectly entered data";
    }

    else {

        if (hours < hours_end) {
            total_secs = hours * 3600 + mins * 60 + secs;
            total_secs_end = hours_end * 3600 + mins_end * 60 + secs_end;
            final_time = total_secs_end - total_secs;

            price = tariff * final_time;
            cout << "The price of a phone call with a per-second billing of 15 kopecks per minute will be " << price << " conventional units" << endl;
        }

        else {
            total_secs = hours * 3600 + mins * 60 + secs;
            total_secs_end = (hours_end + 24) * 3600 + mins_end * 60 + secs_end;
            final_time = total_secs_end - total_secs;

            price = tariff * final_time;
            cout << "The price of a phone call with a per-second billing of 15 kopecks per minute will be " << price << " conventional units" << endl;
        }
    }
}
