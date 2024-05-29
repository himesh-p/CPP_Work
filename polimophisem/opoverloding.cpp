#include<iostream>
using namespace std;

class StringArithmetic {
private:
    string str;
public:
    StringArithmetic(string s) : str(s) {}
    StringArithmetic operator +(StringArithmetic& obj){
        return StringArithmetic(str + obj.str);
    }

    StringArithmetic operator *(int num) {
        string s = str;
         for (int i = 0; i < num-1; i++)
         {
            str += s;
         }
        return StringArithmetic(str); 
    }
    void display(){
        cout << endl << str;
    }
   
};


int main() {
    

    StringArithmetic s1("Hello"), s2(" World!");

    cout << "\nAddition :- ";
    (s1+s2).display();

    cout << endl << "Multiplication :- ";
    (s1 * 3).display();
    return 0;
}