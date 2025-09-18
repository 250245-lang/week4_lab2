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
    int r = rnd(0, 51);
    int rank = r/4;
    int suit = r % 4;
    switch (rank) {
        case 0:
            cout << "Ace ";
            break;
        case 1:
            cout << "2 ";
            break;
        case 2:
            cout << "3 ";
            break;
        case 3:
            cout << "4 ";
            break;
        case 4:
            cout << "5 ";
            break;
        case 5:
            cout << "6 ";
            break;
        case 6:
            cout << "7 ";
            break;
        case 7:
            cout << "8 ";
            break;
        case 8:
            cout << "9 ";
            break;
        case 9:
            cout << "10 ";
            break;
        case 10:
            cout << "Jack ";
            break;
        case 11:
            cout << "Queen ";
            break;
        default:
            cout << "King ";
            break;
    }
    cout << "of ";
    switch (suit) {
        case 0:
            cout << "Clubs" << endl;
            break;
        case 1:
            cout << "Diamonds" << endl;
            break;
        case 2:
            cout << "Hearts" << endl;
            break;
        default:
            cout << "Spades" << endl;
    }
    return  0;
}