#include <iostream>
#include <cmath>
#include <random>


using namespace std;
int main() {
    int weight;

    cin >> weight;
    if (weight <= 0) {
        cout << "Invalid input." << endl;
    } else if (weight > 0 && weight <= 1) {
        cout << "3500" << endl;
    } else if (weight <= 3) {
        cout << "5500" << endl;
    } else if (weight <= 10) {
        cout << "8500" << endl;
    } else if (weight <= 20) {
        cout << "10500" << endl;
    } else {
        cout << "The package cannot be shipped." << endl;
    }

    return 0;
}