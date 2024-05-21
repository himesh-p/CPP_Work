//2. Implement a class for a geometric shape with member variables representing its dimensions. Write a parameterized constructor that initializes these dimensions when an object is created.

#include<iostream>
using namespace std;

class Shape{
private:
    int lenth;
    int width;
public:
    Shape(int l,int w){
        lenth = l;
        width = w;
    }
    void area(){
       cout << endl << "The area of Rectangle is:- " << lenth*width << endl; 
    }
};

int main(){
    Shape obj(2,3);
    obj.area();
    return 0;
}