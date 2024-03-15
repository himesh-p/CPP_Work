#include<iostream>

using namespace std;

int main(){
            int a,b,c;
            cout << "\nEnter the 1st angle of triangle:-  ";
            cin >> a;
            cout << "\nEnter the 2nd angle of triangle:-  ";
            cin >> b;
            cout << "\nEnter the 3rd angle of triangle:-  ";
            cin >> c;
            if(a+b+c == 180){
                cout << "The triangle is vailid";
            }
            else{
                 cout << "The triangle is not vailid.";
                }  
           
            return 0;
}