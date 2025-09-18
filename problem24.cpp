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
    int guess, accuracy;
    cout << "Guess the number between 0 and 99: ";
    cin >> guess;
    int r = rnd(0, 99);
    if (r==guess) {
        accuracy = 100;
    }else if (r%10 == guess%10 || r/10 == guess/10) {
        accuracy = 50;
    }else {
        accuracy = 0;
    }
    cout <<"Your accuracy is "<< accuracy << "%" << endl;
    // cout << "The number was  "<< r << endl;
    return  0;
}