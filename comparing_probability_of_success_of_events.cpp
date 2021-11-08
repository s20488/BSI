/*
    Author: Anastasiia Ponkratova
    Source: Problem 29 in 02_1993_Bookmatter_ReliabilityEngineering.pdf

    Explained in README:
    ...
*/
#include <iostream>
#include <cmath>
#include "comparing_probability_of_success_of_events.h"

using namespace std;

long long gcd(long long a, long long b)
{
    if (a == 0)
        return b;
    else if (b == 0)
        return a;
    if (a < b)
        return gcd(a, b % a);
    else
        return gcd(b, a % b);
}

void decimalToFraction(double input) {
    double integral = floor(input);
    double frac = input - integral;

    const long precision = 1000000000;

    long gcd_ = gcd(round(frac * precision), precision);

    long denominator = precision / gcd_;
    long numerator = round(frac * precision) / gcd_;

    cout << (integral * denominator) + numerator << "/" << denominator << std::endl;
}

double number_of_combinations(int n, int k) {
    int i, c;
    if (2 * k > n) {
        k = n - k;
    }

    c = 1;
    for (i = 0; i < k; i++) {
        c = c * n-- / (i + 1);
    }
    return c;
}

void probability_of_success() {
    double A_loss = number_of_combinations(6, 3) / number_of_combinations(9, 3);
    double A_win = 1 - A_loss;

    double B_loss = number_of_combinations(2, 1) / number_of_combinations(3, 1);
    double B_win = 1 - B_loss;

    double ratio = A_win / B_win;

    decimalToFraction(round(ratio*10)/10);
}