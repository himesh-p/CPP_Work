#include<iostream>
using namespace std;

class Coordinate{
    public:
    int x;
    int y;

    Coordinate(int x1, int y1){
        x = x1;
        y = y1;
    }
    void display(){
        cout << "The coordinate is :- " << endl;
        cout << "(" << x << ","<< y << ")" << endl;
    }
    void qudrant(){
        if(x>0 && y>0){
            cout << "The coordinate is in first qudrant" << endl;
        }
        else if(x<0 && y>0){
            cout << "The coordinate is in second qudrant" << endl;
        }
        else if(x<0 && y<0){
            cout << "The coordinate is in third qudrant" << endl;
        }
        else if(x>0 && y<0){
            cout << "The coordinate is in fourth qudrant" << endl;
        }
        else{
            cout << "The coordinate is in origin." << endl;
        }
    }
};

int main(){
    int x1,y1;
    cout << "Enter the first coordinate:- " << endl;
        cin >> x1;
        cout << "Enter the second coordinate:- " << endl;
        cin >> y1;
    Coordinate c(x1,y1);
    c.display();
    c.qudrant();
}