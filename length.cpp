#include<iostream>

using namespace std;

int main(){
         int cm , km , m;
         cout << "Enter the distance in cm:- " << endl;
         cin >> cm ;
         m = cm / 100;
         km = m / 1000;
         cout << "The distance in km and m is :- " << km << " " << m << endl;
         return 0;
}