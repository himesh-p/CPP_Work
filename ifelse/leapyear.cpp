#include<iostream>

using namespace std;

int main(){
            int a;
            cout << "\nEnter the number: ";
            cin >> a;
            if (a % 4 ==0)
            {
                cout << "\nThis year is leap year.";
            }
            else{
                cout << "\nThis year is not leap year." ;
            }
           return 0;
}