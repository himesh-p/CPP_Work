//8. Develop a class to model a circle with member variables for radius and center coordinates. Write a constructor that initializes these variables when an object is created.

#include<iostream>
using namespace std;

class Circle{
private:
    int radius;
    int x;
    int y;
public:
    Circle(int r, int x1 , int y1){
        radius = r;
        x = x1;
        y = y1;
    }

    void display(){
        cout << "The center of this circle cordinates is (" << x  << " , "<< y << ")" << endl;
        cout << "The radius of this circle is:- " << radius << endl; 
    }
};
int main(){

    Circle obj(6,3,4);
    obj.display();
    return 0;
}