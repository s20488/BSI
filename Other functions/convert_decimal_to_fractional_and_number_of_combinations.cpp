#include <iostream>
#include "math.h"
#include "convert_decimal_to_fractional_and_number_of_combinations.h"

using namespace std;

long long gcd(long long a, long long b) {
    if (a == 0) {
        return b;
    } else if (b == 0) {
        return a;
    }

    if (a < b) {
        return gcd(a, b % a);
    } else {
        return gcd(b, a % b);
    }
}

void decimalToFraction(double input) {
    double integral = floor(input);
    double frac = input - integral;

    const long precision = 1000000000;

    long gcd_ = gcd(round(frac * precision), precision);

    long denominator = precision / gcd_;
    long numerator = round(frac * precision) / gcd_;

    cout << (integral * denominator) + numerator << "/" << denominator << endl;
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