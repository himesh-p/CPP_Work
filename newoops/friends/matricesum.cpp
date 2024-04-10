#include<iostream>
#define SIZE 3;
using namespace std;

class SumOfMatrix{
private:    
    int m1[SIZE],m2[SIZE];
public:
    SumOfMatrix(int a , int b){
        
    }
    
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