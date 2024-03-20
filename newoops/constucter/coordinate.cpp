#include<iostream>
using namespace std;

class Coordinate{
    public:
    int x;
    int y;

    Coordinate(){
        x = 0;
        y = 0;
    }
    void scan(){
        cout << "Enter the first coordinate:- " << endl;
        cin >> x;
        cout << "Enter the second coordinate:- " << endl;
        cin >> y;
    }
    void display(){
        cout << "The coordinate is :- " << endl;
        cout << "(" << x << ","<< y << ")";
    }
};

int main(){
    Coordinate c;
    c.scan();
    c.display();
}