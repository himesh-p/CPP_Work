//1. Calculate the sum of two private data members of different classes: Create two classes with private data members and a friend function to calculate the sum of those data members.

#include<iostream>
using namespace std;

class SumOfNum{
private:    
    int m1,m2;
public:
    SumOfNum(int a , int b): m1(a) , m2(b){}
    
    friend void numbersum(const SumOfNum& obj);
};

    void numbersum(const SumOfNum& obj){
         cout << endl << "The sum of the two number:- " <<  obj.m1 + obj.m2 << endl;
    } 
int main(){
    
    SumOfNum s(2,2);
    numbersum(s);
    return 0;
}