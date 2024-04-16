#include<iostream>
using namespace std;

class MenuItem{
private:
    string name;
    float price;
public:
    MenuItem(string n , float p){
        name = n;
        price = p;
    }
    void getName(){
        cout << "The name of menu:- " << name << endl;
    }
    void getPrice(){
        cout << "The price of this menu is:- " << price << endl;
    }
};

class Order{
private:
    string orderItems;
    float totalAmount;
public:
    Order(string o , float t){
        orderItems = o;
        totalAmount = t;
    }
    class PlaceOrder{
        public:
            void display(){
                cout << "Menu Item you choose:- " << endl;
                cout << 
            }
          
    };
};
int main(){


    return 0;
}