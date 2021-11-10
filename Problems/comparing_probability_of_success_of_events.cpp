/*
    Author: Julia Migiel
    Source: Problem 29 in 02_1993_Bookmatter_ReliabilityEngineering.pdf

    Explained in README:
    https://github.com/s20488/BSI_reliability_calculator#2-comparison-of-the-probability-of-as-success-to-that-of-bs-success
*/
#include <iostream>
#include <cmath>
#include "Header files/comparing_probability_of_success_of_events.h"
#include "../Other functions/convert_decimal_to_fractional_and_number_of_combinations.h"

using namespace std;

void z2_load_data() {
    int n, k, n1, k1;

    cout << "Write a number of prizes for A: " << endl;
    while(!(cin >> k)) {
        cin.clear();
        cin.ignore(10000,'\n');
        cout << "Enter a number!\n";
    }

    cout << "Write a number of blanks for A: " << endl;
    while(!(cin >> n)) {
        cin.clear();
        cin.ignore(10000,'\n');
        cout << "Enter a number!\n";
    }

    cout << "Write a number of prizes for B: " << endl;
    while(!(cin >> k1)) {
        cin.clear();
        cin.ignore(10000,'\n');
        cout << "Enter a number!\n";
    }

    cout << "Write a number of blanks for B: " << endl;
    while(!(cin >> n1)) {
        cin.clear();
        cin.ignore(10000,'\n');
        cout << "Enter a number!\n";
    }

    probability_of_success(n, k, n1, k1);
}

void probability_of_success(int n, int k, int n1, int k1) {
    double A_loss = number_of_combinations(n1, k1) / number_of_combinations(n1 + k1, k1);
    double A_win = 1 - A_loss;

    double B_loss = number_of_combinations(n, k) / number_of_combinations(n + k, k);
    double B_win = 1 - B_loss;

    double ratio = A_win / B_win;

    decimal_to_fraction(round(ratio * 10) / 10);
}