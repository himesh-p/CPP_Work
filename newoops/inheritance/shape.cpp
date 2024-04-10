#include<iostream>
using namespace std;

class Shape{
protected:
    string types;
public:
    Shape(string t): types(t) {}

    void display(){
        cout << "Types of Shape:-  " << types << endl;
    }
};

class Circle: public Shape{
protected:
    int radius;
    float area , parameter;
public:
    Circle(string t , int r): Shape(t), radius(r){}
    
    void arepar(){
        area = 3.14 * radius * radius;
        parameter = 2 * 3.14 * radius;
    }
    void display(){
        Shape::display();
        cout << endl << "Circle has only radius:-  " << endl;
        cout << "Area of the circle:- " << area << endl << "Parameter of the circle:- " << parameter;
    }
};

class Square: public Shape{
protected:
    int length;
    float area , parameter;
public:
    Square(string t , int l): Shape(t), length(l){}
    
    void arepar(){
        area = length * length;
        parameter = 4 * length;
    }
    void display(){
        Shape::display();
        cout << endl << "Squre has only length:-  " << endl;
        cout << "Area of the squre:- " << area << endl << "Parameter of the squre:- " << parameter;
    }
};

class Triangle: public Shape{
protected:
    int heigth , base;
    float area ;
public:
    Triangle(string t , int h , int b): Shape(t), heigth(h) , base(b){}
    
    void arepar(){
        area = 0.5 * heigth * base; 
    }
    void display(){
        Shape::display();
        cout << endl << "Triangle has only length:-  " << endl;
        cout << "Area of the Triangle:- " << area << endl << endl;
    }
};


int main(){
    
    Circle obj1("Circle" , 10);
    Square obj2("Squre" , 20);
    Triangle obj3("Triangle" , 10 , 20);
    obj1.display();
    obj2.display();
    obj3.display();
    return 0;
}