// 1. Shape Calculations: Create a class called 'Geometry' that implements methods to calculate the area of various shapes such as circle, rectangle, and triangle. Use method overloading to define separate functions for each shape's area calculation.

#include<iostream>
using namespace std;

class Geometry{
public:
    int area(int r) {
        cout << "The area of Cicle:- ";
        return (3.14*r*r);
    }
    
    int area(int h, int b) {
        cout << "The area of Triangle:- ";
        return 0.5*b*h;
    }
    
    float area(float a, float b) {
        cout << "The area of Rectangle:- ";
        return a*b;
    }
};

int main() {
    Geometry obj;
    cout << obj.area(2) << endl;
    cout << obj.area(2, 3) << endl;
    cout << obj.area(2.2f, 3.8f) << endl;
    return 0;
}