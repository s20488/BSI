#include <iostream>

using namespace std;

double finding_reliability(int num_of_components, double sys_reliability);

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
