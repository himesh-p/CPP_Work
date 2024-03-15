#include<iostream>

using namespace std;
int main(){
           int num;
           int sum=0,i;
           int rem;
           cout << "Enter the number:- ";
           cin >> num;
           int temp =num;
           int count = 1;
           while ((temp /= 10) > 0) {
           count++;
           }
           temp = num;
           for(i=1;i<=count;i++){
                rem = temp % 10;
                  sum = sum + rem;   
                temp /= 10;
           } 
           cout << "\nThe sum of all odd number:- " << sum;
           return 0;

}