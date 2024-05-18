//Create a system to represent geometric shapes. Shapes can be categorized based on their type (e.g., circle, rectangle) and their properties (e.g., 2D, 3D). Use hybrid inheritance to model this hierarchy effectively.

#include<iostream>
using namespace std;

class Shape{
public:
    void display(){
        cout << "Types of the Shape :- " << endl;
    }
};
class Circle : public Shape{
public:
    void display(){
        cout << "(1) Circle" << endl;
    }
};
class Rectangle : public Shape{
public:
    void display(){
        cout << "(2) Rectangle" << endl;
    }
};
class Properties{
public:
    void display(){
        cout << "Properties of the Shape:- " << endl;
    }
};
class TwoD : public Properties{
public:
    void display(){
        cout << "Properties :- Two Dimension " << endl;
    }
};
class ThreeD : public Properties{
public:
    void display(){
        cout << "Properties :- Three Dimension " << endl;
    }
};

int main(){
    Circle C;
    Rectangle R;
    TwoD T2;
    ThreeD T3;
    C.Shape::display();
    C.display();
    R.display();
    T2.Properties::display();
    T2.display();
    T3.display();
    return 0;
}