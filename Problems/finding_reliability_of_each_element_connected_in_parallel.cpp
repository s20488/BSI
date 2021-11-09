/*
    Author: Anastasiia Ponkratova
    Source: Problem 54 in 02_1993_Bookmatter_ReliabilityEngineering.pdf

    Explained in README:
    ...
*/
#include <iostream>
#include <math.h>
#include "Header files/finding_reliability_of_each_element_connected_in_parallel.h"

using namespace std;

void finding_reliability(int num_of_components, double sys_reliability) {
    double result = 1 - pow(1 - sys_reliability, 1 / static_cast<double>(num_of_components));
    cout << round(result * 10000) / 10000;
}