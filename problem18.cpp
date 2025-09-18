#include <iostream>
#include <cmath>
#include <random>


using namespace std;

int main() {
    char a;
    cin>>a;
    switch(a) {
        case 'u':
            cout<<"Salom"<<endl;
            break;
        case 'e':
            cout<<"Hello"<<endl;
            break;
        case 'g':
            cout<<"Hallo"<<endl;
            break;
        case 'r':
            cout<<"Привет"<<endl;
            break;
        default:
            cout<<"I do not know this language:("<<endl;
    }
    return  0;
}