#include<iostream>
using namespace std;

class Product{
private:
    string name;
    float price;
    string discription;
public: 
    Product(string n, float p, string d){
        name = n;
        price = p;
        discription = d;
    }
    void displayInfo(){
        cout << "The name of Prodct:- " << name  << endl;
        cout << "The price of the Product:- " << price << endl;
        cout << "The discription of the Product:- " << discription << endl;
    }
};

class PhysicalProdeuct : public Product{
private: 
    int weigth;
    int shoppingcost;
    int deliverytime;
public:
    PhysicalProdeuct(int w , int s ,int d,string n, float p, string d1) : weigth(w) , shoppingcost(s) , deliverytime(d) , Product(n,p,d1){}
    void displayInfo(){
        cout << "The Weigth of this Physical product:- " << weigth << endl;
        cout << "The Shopping Cost of this product is:- " << shoppingcost << endl;
        cout << "The delivery time of this product is:- " << deliverytime << endl;
    }
};

class DigitalProdeuct : public Product{
private: 
    string link;
    int size;
public:
    void displayInfo(){
        cout << "The link of this digital product:- " << link << endl;
        cout << "The size of this digital product is:- " << size << endl;
    }
};
int main(){

    // PhysicalProdeuct obj1(23 , 1000, 10 , );

    return 0;
}