#include<iostream>

using namespace std;

int main(){
             int num,i,fact=1;
             cout << "Enter the any number:- ";
             cin >> num;
             for (i=1;i<=num;i++)
             {
                fact *= i; 
             }
             cout << "The factorial of this number is :-  "<< fact;
             return 0;  
}