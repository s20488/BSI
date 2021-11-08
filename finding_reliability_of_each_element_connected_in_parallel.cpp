/*
    Author: Anastasiia Ponkratova
    Source: Problem 54 in 02_1993_Bookmatter_ReliabilityEngineering.pdf

    Explained in README:
    ...
*/
#include <math.h>

using namespace std;

double finding_reliability(int num_of_components, double sys_reliability) {
    double result = 1-pow(1-sys_reliability, 1/static_cast<double>(num_of_components));
    return result;
}