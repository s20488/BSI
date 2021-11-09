#include <iostream>
#include "Problems/Header files/finding_reliability_of_each_element_connected_in_parallel.h"
#include "Problems/Header files/comparing_probability_of_success_of_events.h"
#include "Problems/Header files/probability_of_passing_interview.h"
#include "Problems/Header files/finding_probility_of_two_kids.h"
#include "Problems/Header files/probability_of_electricity_on_any_day.h"

using namespace std;

int main() {
    int choose;
    do {
        cout << "\n\nPlease select a problem: \n";
        cout << "1. Calculation of reliability of each element in parallel in the system;\n";
        cout << "2. Comparison of the probability of A's success to that of B's success;\n";
        cout << "3. Probability of being interviewed for a position;\n";
        cout << "4. Calculation probability of finding 2 kids from group that contains x kids,y womans,z mens\n";
        cout << "5. Finding probability of capacity availability in the cinema on any day.\n";
        cout << "6. Exit\n";

        while (!(cin >> choose)) {
            cin.clear();
            cin.ignore(INT_MAX,'\n');
            cout<<"Enter a number!\n";
        }

        if (choose == 1) {
            finding_reliability(10, 0.95);
        } else if (choose == 2) {
            probability_of_success(6, 3, 2, 1);
        } else if (choose == 3) {
            probability_of_passing(1, 7, 1, 5);
        } else if (choose == 4) {
            probability_of_choosing(3,2,4);
        } else if (choose == 5) {
            probability_of_availability_of_electricity(0.025, 0.04);

        } else if (choose == 6) {
            cout << "Authors: Anastasiia Ponkratova & Julia Migiel\n"
                    "Date: 10.11.2021\n"
                    "Project for BSI Classes in PJATK-University" << endl;
        } else {
            cout << "Select a number from 1-6!";
        }
    }
    while (choose != 6);

    return 0;
}