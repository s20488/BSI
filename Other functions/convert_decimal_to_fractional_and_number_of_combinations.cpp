#include <iostream>
#include "math.h"
#include "convert_decimal_to_fractional_and_number_of_combinations.h"

using namespace std;
//Recursive function to return GCD(Greatest Common Divisor) of a and b
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
//Function to convert decimal to fraction
void decimal_to_fraction(double input) {
    double integral = floor(input); //Fetch integral value of the decimal
    double frac = input - integral; //Fetch fractional part of the decimal

    const long precision = 1000000000; //Consider precision value to convert fractional part to integral equivalent

    long gcd_ = gcd(round(frac * precision), precision);//Calculate GCD of integral equivalent of fractional part and precision value
    //Calculate numerator and denominator
    long denominator = precision / gcd_;
    long numerator = round(frac * precision) / gcd_;
    //Print the fraction
    cout << (integral * denominator) + numerator << "/" << denominator << endl;
}
//Function calculates the number of combinations without repetitions
//n - number of different elements
//k - variants to choose from a set of n elements
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