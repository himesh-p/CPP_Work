//2. Math Operations: Develop a class named 'MathOperations' that overloads methods for performing arithmetic operations like addition, subtraction, multiplication, and division for different data types such as integers, floating-point numbers, and complex numbers.
#include<iostream>
using namespace std;

class Adder {
public:
    static int add(int a, int b) {
        return a+b;
    }
    
    static int add(int a, int b, int c) {
        return a+b+c;
    }
    
    static float add(float a, float b) {
        return a+b;
    }
    
    static double add(double a, double b) {
        return a+b;
    }
};

int main() {
    
    cout << Adder::add(2, 3) << endl;
    cout << Adder::add(2, 3, 5) << endl;
    cout << Adder::add((float)2.2, 3.8f) << endl;
    cout << Adder::add(2.2, 3.8) << endl;




    return 0;
}