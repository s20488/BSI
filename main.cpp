#include <iostream>
#include "finding_reliability_of_each_element_connected_in_parallel.h" as "df"
using namespace std;

int main() {
    int choose;
    do {
        cout << "\n\nPlease select a problem: \n";
        cout << "1. Calculation of reliability of each element in parallel in the system;\n";
        cout << "6. Exit\n";

        while (!(cin >> choose)) {
            cin.clear();
            cin.ignore(INT_MAX,'\n');
            cout<<"Enter a number!\n";
        }

        if (choose == 1)
            cout << finding_reliability(10, 0.95);
        else
            cout << "Select a number from 1-6!";
    }
    while (choose != 6);

    return 0;
}