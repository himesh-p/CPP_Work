//4. Calculate the average of private data members of a class: Create a class with private data members and a friend function to calculate the average of those data members.

#include<iostream>
using namespace std;

class SumOfNum{
private:    
    double m1,m2,m3,m4;
public:
    SumOfNum(double a , double b , double c , double d): m1(a) , m2(b) , m3(c) ,m4(d){}
    
    friend void numbersum(const SumOfNum& obj);
};

    void numbersum(const SumOfNum& obj){
         cout << endl << "The sum of the two number:- " <<  (obj.m1 + obj.m2 + obj.m3 + obj.m4)/4 << endl;
    } 
int main(){
    
    SumOfNum s(3,4,5,6);
    numbersum(s);
    return 0;
}