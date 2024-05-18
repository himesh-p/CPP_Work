#include<iostream>
using namespace std;

class SumOfNum{
private:    
    int m1,m2,m3,m4;
public:
    SumOfNum(int a , int b , int c , int d): m1(a) , m2(b) , m3(c) ,m4(d){}
    
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