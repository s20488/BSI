#include <iostream>
#include "finding_reliability_of_each_element_connected_in_parallel.h"
#include "comparing_probability_of_success_of_events.h"

using namespace std;

int main() {
    int choose;
    do {
        cout << "\n\nPlease select a problem: \n";
        cout << "1. Calculation of reliability of each element in parallel in the system;\n";
        cout << "2. Comparison of the probability of A's success to that of B's success;\n";
        cout << "6. Exit\n";

        while (!(cin >> choose)) {
            cin.clear();
            cin.ignore(INT_MAX,'\n');
            cout<<"Enter a number!\n";
        }

        if (choose == 1)
            finding_reliability(10, 0.95);
        else if (choose == 2) {
            probability_of_success();
        }
        else
            cout << "Select a number from 1-6!";
    }
    while (choose != 6);

    return 0;
}