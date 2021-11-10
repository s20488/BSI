/*
    Author: Anastasiia Ponkratova
    Source: Problem 28 in 02_1993_Bookmatter_ReliabilityEngineering.pdf

    Explained in README:
    https://github.com/s20488/BSI_reliability_calculator/blob/main/README.md#5-finding-probability-of-capacity-availability-in-the-cinema-on-any-day
*/
#include <iostream>
#include <cmath>
#include "Header files/probability_of_electricity_on_any_day.h"

using namespace std;

void z5_load_data() {
    double event_A, event_B;

    cout << "Write in the probability that the generator will not run on any day: " << endl;
    while(!(cin >> event_A) != (int) event_A) {
        cin.clear();
        cin.ignore(10000,'\n');
        cout << "Enter a decimal number!\n";
    }

    cout << "Write the probability that the diesel engine will not run on any day: " << endl;
    while(!(cin >> event_B) != (int) event_B) {
        cin.clear();
        cin.ignore(10000,'\n');
        cout << "Enter a decimal number!\n";
    }

    probability_of_availability_of_electricity(event_A, event_B);
}

void probability_of_availability_of_electricity(double event_A, double event_B) {
    double sum_of_events = event_A + event_B - event_A * event_B;
    double power_availability = 1 - sum_of_events;
    cout << round(power_availability * 10000) / 10000;
}