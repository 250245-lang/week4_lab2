#include <iostream>
#include <cmath>
#include <random>


using namespace std;

int main() {
    int grade;
    cin>>grade;
    switch(grade) {
        // case 0 ... 59:
        //     cout<<"F"<<endl;
        //     break;
        case 60 ... 69:
            cout<<"D"<<endl;
            break;
        case 70 ... 79:
            cout<<"C"<<endl;
            break;
        case 80 ... 89:
            cout<<"B"<<endl;
            break;
        case 90 ... 100:
            cout<<"A"<<endl;
            break;
        default:
            cout<<"F"<<endl;
    }
    return  0;
}