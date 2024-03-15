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
            if ( a==b && b==c && a==c)
            {
                cout << "\nThe triangle is Equilateral";
            }
            else if ((a==b) || (b==c) || (c==a))
            {
              cout << "\nThe triangle is Isosceles";
            }
            else{
               cout << 
            }
            return 0;

}