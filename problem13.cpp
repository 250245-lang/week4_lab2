#include <iostream>
#include <cmath>
#include <random>


using namespace std;

int main() {
    char a;
    cin>>a;
    switch(a) {
        case 'g':
            cout<<"Go!"<<endl;
            break;
        case 'y':
            cout<<"Get ready!"<<endl;
            break;
        case 'r':
            cout<<"Stop"<<endl;
            break;
        default:
            cout<<"Wrong input"<<endl;
            break;
    }
    return  0;
}