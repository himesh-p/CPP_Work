//1. Shape Hierarchy: Create a base class 'Shape' with virtual function 'calculateArea()'. Derive classes 'Circle' and 'Rectangle' from 'Shape', each with its own implementation of 'calculateArea()'. Write a program to demonstrate polymorphism by calling 'calculateArea()' for objects of both derived classes.

#include<iostream>
using namespace std;

class Shape{
public:
    virtual void calaculateArea(){

    }
};
class Circle: public Shape{
private:
    int radius;
public:
    Circle(int r): radius(r){}
    void calaculateArea() override{
            cout << "The area of the circle is :- " << 3.14 * radius * radius << endl;
    }
};
class Rectangle: public Shape{
private:
      int len;
      int bre;
public:
    Rectangle(int l , int b): len(l) , bre(b){}
    void calaculateArea() override{
            cout << "The area of the Rectangle is :- " << len * bre << endl;
    }
};
int main(){
    Shape *obj;
    Circle c(3);
    Rectangle R(2,3);
    obj = &c;
    obj->calaculateArea();
    obj = &R;
    obj->calaculateArea();
    return 0;
}