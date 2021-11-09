/*
    Author: Julia Migiel
    Source: Problem 23 in 02_1993_Bookmatter_ReliabilityEngineering.pdf

    Explained in README:
    ...
*/
#include <cmath>
#include "Header files/probability_of_passing_interview.h"
#include "../Other functions/convert_decimal_to_fractional_and_number_of_combinations.h"

using namespace std;

void probability_of_passing(int num, int den, int num1, int den1) {
    double husband_selected = static_cast<double>(num) / static_cast<double>(den);
    double wife_selected = static_cast<double>(num1) / static_cast<double>(den1);

    double husband_not_selected = 1 - husband_selected;
    double wife_not_selected = 1 - wife_selected;

    double selection = (husband_selected * wife_not_selected) + (wife_selected * husband_not_selected);

    decimalToFraction(round(selection * 10) / 10);
}