#include <iostream>
#include <cmath>
#include <random>


using namespace std;

int main() {
    int n;
    cin>>n;
    switch (n) {
        case 1:
            cout<<"In January there is:"<<endl;
            cout<<"\t- New Year, 1 January"<<endl;
            cout<<"\t- Homeland Defenders’ Day (Men’s Day), 14 January"<<endl;
            break;
        case 3:
            cout<<"In March there is:"<<endl;
            cout<<"\t- International Women's Day, 8 March"<<endl;
            cout<<"\t- Navruz, 21 March"<<endl;
            break;
        case 5:
            cout<<"In May there is:"<<endl;
            cout<<"\t- Memorial Day, 9 May"<<endl;
            break;
        case 9:
            cout<<"In September there is:"<<endl;
            cout<<"\t- Independence Day, 1 September"<<endl;
            break;
        case 10:
            cout<<"In October there is:"<<endl;
            cout<<"\t- Teachers’ and Mentors’ Day, 1 October"<<endl;
            break;
        case 12:
            cout<<"In December there is:"<<endl;
            cout<<"\t- Constitution Day, 8 December"<<endl;
            break;
        default:
            cout<<"In February, April, June, July, August, November there is no holidays. There are Ramadan Hayit and Kurban Hayit but their dates change."<<endl;



    }
    return  0;
}