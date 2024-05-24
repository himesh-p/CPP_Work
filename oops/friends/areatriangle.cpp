// 9. Calculate the area of a triangle using friend function: Define a class representing a triangle with private data members for its sides and a friend function to calculate its area.

#include<iostream>
using namespace std;

class Area{
private:    
    int height,lenght;
public:
    Area(int a , int b): height(a) , lenght(b){}
    
    friend void areaoftriangle(const Area& obj);
};

    void areaoftriangle(const Area& obj){
         cout << endl << "The area of triangle:- " << 0.5 * obj.height * obj.lenght << endl;
    } 
int main(){
    
    Area a(10,20);
    areaoftriangle(a);
    return 0;
}