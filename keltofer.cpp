#include<iostream>

using namespace std;

int main(){
           int kel;
           float f;
           cout << "Enter the  temprature in kelvin:- " << endl;
           cin >> kel;
           f = (kel -273.15)*9.0/5.0 + 32;
           cout << "The temprature in feranhit is:- " << f << endl;
           return 0;

}
