#include<iostream>
using namespace std;


class Geometry{
protected:
    string type;
public:
    Geometry(string t) : type(t){}

    void displayType(){
        cout << "The type of the geometry shape is:- "  << type  << endl; 
    }
};

class Circle : public Geometry{
protected:
    int radius;
public:
    Circle(string t , int r) : Geometry(t), radius(r){}

    float areacircle(){
        float areac = 3.14 * radius * radius;
        return areac;
    }
    void displayCircle(){
        cout << "The area of the circle is :- "  << areacircle() << endl; 
    }
};

class Square : public Geometry{
protected:
    int length;
    int bregth;
public:
    Square(string t , int l , int b) : Geometry(t), length(l) , bregth(b){}

    float areaSqu(){
        float areas = length * bregth;
        return areas;
    }
    void displaySquare(){
        cout << "The area of the square is :- "  << areaSqu() << endl; 
    }
};
int main(){

    Circle obj1("Circle" , 3);
    Square obj2("Square" , 5 , 6);
    obj1.displayType();
    obj1.displayCircle();
    obj2.displayType();
    obj2.displaySquare();
    return 0;
}