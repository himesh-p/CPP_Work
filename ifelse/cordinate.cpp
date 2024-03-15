#include<iostream>

using namespace std;

int main(){
            int a,b;
            cout << "\nEnter the 1st point: ";
            cin >> a;
             cout << "\nEnter the 2nd point: ";
            cin >> b;
            if (a>0 && b>0)
            {
                cout << "\nThe point" <<(a,b) << "is in 1st qudrent.";
            }
            else if (a<0 && b>0)
            {
               cout << "\nThe point" << (a,b) << "is in 2nd qudrent.";
            }
            else if (a<0 && b<0)
            {
               cout << "\nThe point" << (a,b) << "is in 3rd qudrent.";
            }
            else{
               cout << "\nThe point" << (a,b) << "is in 4th qudrent.";
            }
           return 0;
}