#include<iostream>

using namespace std;

int main(){
           int km;
           float mile;
           cout << "Enter the speed in kilometers per hour:- " << endl;
           cin >> km;
           mile = 0.621371 * km;
           cout << "The speed in miles per hour :-  " << mile << " miles/hour" << endl ;

         return 0;
}