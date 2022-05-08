// Путь до бомбоубежища.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    float S, V, t, t_min, t_hours, t_sec;
    cout << "How many kilometers did you run? ";
    cin >> S;
    cout << "How fast were you running (in meters per second)? ";
    cin >> V;
    t = S * 1000 / V;
    t_hours = t / 3600;
    t_min = t / 60 - ((int)t_hours * 60);
    t_sec = t - ((int)t_hours * 3600 + (int)t_min * 60);
    cout << (int)t_hours << " hours " << (int)t_min << " minutes " << (int)t_sec << " seconds" << endl;
}
