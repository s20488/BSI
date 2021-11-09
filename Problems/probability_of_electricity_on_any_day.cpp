/*
    Author: Anastasiia Ponkratova
    Source: Problem 28 in 02_1993_Bookmatter_ReliabilityEngineering.pdf

    Explained in README:
    ...
*/
#include <iostream>
#include <cmath>
#include "Header files/probability_of_electricity_on_any_day.h"

using namespace std;

void probability_of_availability_of_electricity(double event_A, double event_B) {
    double sum_of_events = event_A + event_B - event_A * event_B;
    double power_availability = 1 - sum_of_events;
    cout << round(power_availability * 10000) / 10000;
}