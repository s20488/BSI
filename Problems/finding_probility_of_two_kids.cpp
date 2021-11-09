/*
    Author: Julia Migiel
    Source: Problem 30 in 02_1993_Bookmatter_ReliabilityEngineering.pdf

    Explained in README:
    ...
*/
#include "math.h"
#include "Header files/finding_probility_of_two_kids.h"
#include "../Other functions/convert_decimal_to_fractional_and_number_of_combinations.h"

using namespace std;

void probability_of_choosing(double men,double woman, double kids) {
    double kids_choose = number_of_combinations(kids, 2);
    double men_woman_choose = number_of_combinations(men + woman, 2);
    double universal_set = number_of_combinations(men + woman + kids, 4);

    double probability = (kids_choose * men_woman_choose) / universal_set;
    decimalToFraction(round(probability * 10) / 10);
}