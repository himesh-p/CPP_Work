#include<iostream>

using namespace std;

int main(){
           int f;
           float c;
           cout << "Enter the temprature in feranhit" << endl;
           cin >> f;

           c = (f - 32)*5.0/9.0;
           cout << "The temprature in celsius is :-  " << c << endl;
           return 0;    
}