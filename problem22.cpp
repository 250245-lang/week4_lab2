#include <iostream>
#include <cmath>
#include <random>


using namespace std;

int rnd(int a, int b){
    srand((unsigned) time(NULL));
    int my_rand = a + (rand() % (b-a+1));
    return my_rand;
}

int main() {
    string guess;
    cout << "Please enter a guess(even/odd):" << endl;
    cin >> guess;
    int g;
    if (guess == "even") {
        g = 0;
    }else if (guess == "odd") {
        g = 1;
    }else {
        cout << "Invalid input" << endl;
        return 0;
    }
    int r = rnd(0, 1);
    if (g==r) {
        cout << "Correct" << endl;
    }else {
        cout << "Wrong" << endl;
    }
    return  0;
}