// Точное время.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int sec;
    float days, hours, mins, secs;

    cout << "Enter number of seconds: ";
    cin >> sec;

    days = sec / 86400.0;
    hours = (days - trunc(days)) * 24;
    mins = (hours - trunc(hours)) * 60;
    secs = (mins - trunc(mins)) * 60;
    cout << "It is " << trunc(days) << " days " << trunc(hours) << " hours " << trunc(mins) << " minutes " << round(secs) << " seconds " << endl;
}

