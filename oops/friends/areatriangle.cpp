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