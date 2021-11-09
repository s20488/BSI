/*
    Author: Julia Migiel
    Source: Problem 29 in 02_1993_Bookmatter_ReliabilityEngineering.pdf

    Explained in README:
    ...
*/
#include <cmath>
#include "Header files/comparing_probability_of_success_of_events.h"
#include "../Other functions/convert_decimal_to_fractional_and_number_of_combinations.h"

using namespace std;

void probability_of_success(int n, int k, int n1, int k1) {
    double A_loss = number_of_combinations(n, k) / number_of_combinations(n + k, k);
    double A_win = 1 - A_loss;

    double B_loss = number_of_combinations(n1, k1) / number_of_combinations(n1 + k1, k1);
    double B_win = 1 - B_loss;

    double ratio = A_win / B_win;

    decimalToFraction(round(ratio * 10) / 10);
}