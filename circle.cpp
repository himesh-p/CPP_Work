#include<iostream>

using namespace std;

int main(){
           int radius;
           float area , cir;
           cout << "Enter the radius of the circle:- " << endl;
           cin >> radius;
           area = 3.14 * radius * radius;
           cir = 2 * 3.14 * radius;
           cout << "The area of the circle is:- " << area << endl;
           cout << "The circleframce of the cirlce is:- " << cir;
           return 0;
}