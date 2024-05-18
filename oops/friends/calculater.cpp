#include<iostream>
using namespace std;

class Calculater{
private:    
    int m1,m2;
public:
    Calculater(int a , int b): m1(a) , m2(b){}
    
    friend void numbersum(const Calculater& obj);
    friend void numbersub(const Calculater& obj1);
    friend void numbermul(const Calculater& obj2);
    friend void numberdiv(const Calculater& obj3);
};

    void numbersum(const Calculater& obj){
         cout << endl << "The sum of the two number:- " <<  obj.m1 + obj.m2 << endl;
    } 
    void numbersub(const Calculater& obj){
         cout << endl << "The subtraction of the two number:- " <<  obj.m1 - obj.m2 << endl;
    } 
    void numbermul(const Calculater& obj){
         cout << endl << "The multiplication of the two number:- " <<  obj.m1 * obj.m2 << endl;
    } 
    void numberdiv(const Calculater& obj){
         cout << endl << "The division of the two number:- " <<  obj.m1 / obj.m2 << endl;
    } 
int main(){
    
    Calculater s(10,2);
    numbersum(s);
    numbersub(s);
    numbermul(s);
    numberdiv(s);
    return 0;
}