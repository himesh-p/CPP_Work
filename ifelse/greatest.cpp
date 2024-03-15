#include<iostream>

using namespace std;

int main(){
            int a,b,c;
            cout << "\nEnter the 1st number: ";
            cin >> a;
             cout << "\nEnter the 2nd number: ";
            cin >> b;
             cout << "\nEnter the 3rd number: ";
            cin >> b;
            if (a>b && a>c)
            {
                cout << "\nThe 1st number is greatest.";
            }
            else if (b>a && b>c)
            {
               cout << "\nThe 2nd number is greatest.";
            }
            else
            {
                cout << "\nThe 3rd number is greatest." ;
            }
           return 0;
}