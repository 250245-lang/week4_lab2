#include <iostream>
#include <cmath>
#include <random>


using namespace std;

int main() {
    cout<<"Enter today's day: ";
    int day, day2, future;
    cin>>day;

    cout<<"Enter the number of days elapsed since today: ";
    cin>>day2;
    future = day2 + day;
    string day1name, day2name;
    switch(day%7) {
        case 0:
            day1name="Sunday";
            break;
        case 1:
            day1name="Monday";
            break;
        case 2:
            day1name="Tuesday";
            break;
        case 3:
            day1name="Wednesday";
            break;
        case 4:
            day1name="Thursday";
            break;
        case 5:
            day1name="Friday";
            break;
        default:
            day1name = "Saturday";
    }
    switch(future%7) {
        case 0:
            day2name="Sunday";
            break;
        case 1:
            day2name="Monday";
            break;
        case 2:
            day2name="Tuesday";
            break;
        case 3:
            day2name="Wednesday";
            break;
        case 4:
            day2name="Thursday";
            break;
        case 5:
            day2name="Friday";
            break;
        default:
            day2name = "Saturday";
    }
    cout<<"Today is "<<day1name<<" and the future day is "<<day2name<<endl;
    return  0;
}