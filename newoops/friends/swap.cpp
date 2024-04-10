#include<iostream>
using namespace std;

class Value1{
 private:    
    int m1;
 public:
    Value1(int a ): m1(a) {}
    
    friend int first(const Value1& obj);
};

int first(const Value1& obj){
        return obj.m1;
    } 

class Value2{
 private:    
    int m2;
 public:
    Value2(int b ): m2(b) {}
    
    friend int second(const Value2& obj1);
};                                                    

    int second(const Value2& obj1){
        return obj1.m2;
    } 
int main(){
    
    Value1 v1(3);
    Value2 v2(6); 

    first(v1);
    second(v2);
    int temp;
    temp = first(v1);
    first(v1) = second(v2);
    second(v2) = temp;
    return 0;
}