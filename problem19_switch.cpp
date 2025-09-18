#include <iostream>
#include <cmath>
#include <random>


using namespace std;
int main() {
    int weight;

    cin >> weight;
    if (weight <= 0) {
        cout << "Invalid input." << endl;
    } else if (weight > 20) {
        cout << "The package cannot be shipped." << endl;
    }else {
        switch (weight) {
            case 0:
            case 1:
                cout << "3500" << endl;
                break;
            case 2:
            case 3:
                cout << "5500" << endl;
                break;
            case 4 ... 10:
                cout << "8500" << endl;
                break;
            default:
                cout << "10500." << endl;
        }
    }

    return 0;
}