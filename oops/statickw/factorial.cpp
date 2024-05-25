//2. "Implement a 'MathUtility' class with a static member function 'factorial(int n)' that calculates and returns the factorial of a given integer 'n'. The function should be accessible without creating an instance of the class."

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