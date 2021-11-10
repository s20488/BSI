/*
    Author: Julia Migiel
    Source: Problem 23 in 02_1993_Bookmatter_ReliabilityEngineering.pdf

    Explained in README:
    https://github.com/s20488/BSI_reliability_calculator/blob/main/README.md#3-calculate-probability-that-only-one-of-woman-or-man-will-be-selecte-with-specified-probability
*/
#include <iostream>
#include <cmath>
#include "Header files/probability_of_passing_interview.h"
#include "../Other functions/convert_decimal_to_fractional_and_number_of_combinations.h"

using namespace std;

void z3_load_data() {
    int num, den, num1, den1;

    cout << "Write in the probability of choosing a husband: \n"
            "Numerator: " << endl;
    while(!( cin >> num)) {
        cin.clear();
        cin.ignore(10000,'\n');
        cout << "Enter a number!\n";
    }
    cout << "Denominator: " << endl;
    while(!( cin >> den)) {
        cin.clear();
        cin.ignore(10000,'\n');
        cout << "Enter a number!\n";
    }

    cout << "Write in the probability of choosing a wife: \n"
            "Numerator: " << endl;
    while(!( cin >> num1)) {
        cin.clear();
        cin.ignore(10000,'\n');
        cout << "Enter a number!\n";
    }
    cout << "Denominator: " << endl;
    while(!( cin >> den1)) {
        cin.clear();
        cin.ignore(10000,'\n');
        cout << "Enter a number!\n";
    }

    probability_of_passing(num, den, num1, den1);
}

void probability_of_passing(int num, int den, int num1, int den1) {
    double husband_selected = static_cast<double>(num) / static_cast<double>(den);
    double wife_selected = static_cast<double>(num1) / static_cast<double>(den1);

    double husband_not_selected = 1 - husband_selected;
    double wife_not_selected = 1 - wife_selected;

    double selection = (husband_selected * wife_not_selected) + (wife_selected * husband_not_selected);

    decimal_to_fraction(round(selection * 10) / 10);
}