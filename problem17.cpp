#include <iostream>
#include <cmath>
#include <random>


using namespace std;

int main() {
    int n;
    cin>>n;
    if (n>0) {
        cout<<"Positive"<<endl;
    }else if (n<0) {
        cout<<"Negative"<<endl;
    }else {
        cout<<"It is zero"<<endl;
    }
    return  0;
}