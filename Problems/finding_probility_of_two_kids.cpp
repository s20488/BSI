/*
    Author: Julia Migiel
    Source: Problem 30 in 02_1993_Bookmatter_ReliabilityEngineering.pdf

    Explained in README:
    https://github.com/s20488/BSI_reliability_calculator/blob/main/README.md#4-calculation-probability-of-finding-2-kids-from-group-that-contains-x-kids-y-womans-z-mens
*/
#include <iostream>
#include "math.h"
#include "Header files/finding_probility_of_two_kids.h"
#include "../Other functions/convert_decimal_to_fractional_and_number_of_combinations.h"

using namespace std;

void z4_load_data() {
    double men, women, kids;

    cout << "Write a number of men: " << endl;
    while(!(cin >> men)) {
        cin.clear();
        cin.ignore(10000,'\n');
        cout << "Enter a number!\n";
    }

    cout << "Write a number of women: " << endl;
    while(!(cin >> women)) {
        cin.clear();
        cin.ignore(10000,'\n');
        cout << "Enter a number!\n";
    }

    cout << "Write a number of kids: " << endl;
    while(!(cin >> kids)) {
        cin.clear();
        cin.ignore(10000,'\n');
        cout << "Enter a number!\n";
    }

    probability_of_choosing(men, women, kids);
}

void probability_of_choosing(double men,double women, double kids) {
    double kids_choose = number_of_combinations(kids, 2);
    double men_woman_choose = number_of_combinations(men + women, 2);
    double universal_set = number_of_combinations(men + women + kids, 4);

    double probability = (kids_choose * men_woman_choose) / universal_set;
    decimal_to_fraction(round(probability * 10) / 10);
}