#include<iostream>
using namespace std;

class Factorial{
public:
    int number;
    static int fact;

    Factorial(int n){
        number = n;
    }

    void num_Factorial(){
        for(int i=1 ; i<= number ; i++){
            fact *= i;
        }
        cout << endl << "The factorial of the number is:- " << fact;
    }
};

int Factorial::fact = 1;

int main(){
 
    Factorial obj(7);
    obj.num_Factorial();
    return 0;
}