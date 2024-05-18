//2. Implement a class called "Rectangle" with attributes length and width. Write methods to input dimensions, calculate area, and display the rectangle's details.
#include<iostream>
using namespace std;

class Rectangle{
    int length;
    int width;


    public:
    void scan(){
        cout << "\nEnter the length of the rectangle:-  ";
        cin >> length;;
        cout << "\nEnter the width of the rectangle:-  ";
        cin >> width;
    }
    void display(){
        cout << "\nThe lenth of the rectangle = " << length;
        cout << "\nThe width of the rectangle = " << width;
    }
    void dimension(){
        int dim = 2*(length + width);
        cout << "\nThe dimension of the rectangle is :-  " << dim;
    }
    void area(){
        int area = length * width;
        cout << "\nThe area of the rectangle is :-  " << area;
    }
};

int main(){
    Rectangle r;
    r.scan();
    r.display();
    r.dimension();
    r.area();
}