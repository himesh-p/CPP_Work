#include<iostream>

using namespace std;

int main(){
             int base ,exp,i,pow=1;
             cout << "Enter the base and exponant:- ";
             cin >> base >> exp;
             for (i=1;i<=exp;i++)
             {
                pow *= base;
             }
             cout << "The power of this base is :-  "<<pow;
             return 0;  
}