/*
    Author: Anastasiia Ponkratova
    Source: Problem 54 in 02_1993_Bookmatter_ReliabilityEngineering.pdf

    Explained in README:
    https://github.com/s20488/BSI_reliability_calculator#1-calculation-of-reliability-of-each-element-in-parallel-in-the-system
*/
#include <iostream>
#include <math.h>
#include "Header files/finding_reliability_of_each_element_connected_in_parallel.h"

using namespace std;

void z1_load_data() {
    int num_of_components;
    double sys_reliability;

    cout << "Write the number of elements: " << endl;
    while(!(cin >> num_of_components)) {
        cin.clear(); //input that fails will be placed as if in a buffer
        cin.ignore(10000,'\n'); // retrieves 10000 (10000 is just a total high value) characters from the buffer, but stops if it encounters a new string (\n)
        cout << "Enter a number!\n";
    }

    cout << "Write in the reliability of the system: " << endl;
    while(!(cin >> sys_reliability ) != (int) sys_reliability) {
        cin.clear();
        cin.ignore(10000,'\n');
        cout << "Enter a decimal number!\n";
    }

    finding_reliability(num_of_components, sys_reliability);
}

void finding_reliability(int num_of_components, double sys_reliability) {
    double result = 1 - pow(1 - sys_reliability, 1 / static_cast<double>(num_of_components));
    cout << round(result * 10000) / 10000; //The value of x rounded to the nearest integral
}