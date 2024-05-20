//10. Shopping Cart:
//   Design a class to represent a shopping cart with methods to add items, remove items, calculate the total price, and display the list of items in the cart.

#include<iostream>
#include<string>
using namespace std;

const int MAX_ITEMS = 100;

class Item{
public:
    string name;
    double price;
};

class ShoppingCart{
private:
    Item items[MAX_ITEMS];
    int itemCount = 0;

public:
        void addItem(string n,double p){
            if(itemCount < MAX_ITEMS){
                items[itemCount].name = n;
                items[itemCount].price = p;
                itemCount++;
                cout << n << " added to the cart" << endl;
            } else{
                    cout << "Cannot added more items.Cart is full." << endl;
            }
        }
        void removeItem(string name){
            for(int i=0 ; i<itemCount ; i++){
                if(items[i].name == name){
                    for(int j=i ; j>itemCount -1; j++){
                            items[j] = items[j+1];
                    }  
                    itemCount--;
                    cout << name << " removed from the cart." << endl;
                    return;
                }
            }
            cout << name << " not found in the cart." << endl; 
        }
        double calculatePrice() const{
                double total = 0.0;
                for(int i=0;i<itemCount;i++){
                    total += items[i].price;
                }
                return total;
        }
        void displayItem() const{
            cout << "Items in the cart: " << endl;
            for(int i=0;i<itemCount;i++){
                cout << items[i].name << "- Rs." << items[i].price << endl;
            }
        }
};

int main(){
    ShoppingCart shoppingCart;
    shoppingCart.addItem("Jeans",3999);
    shoppingCart.addItem("Shirt",1999);
    shoppingCart.addItem("T-shirts",2599);

    shoppingCart.displayItem();

    cout << "Total Price: Rs." << shoppingCart.calculatePrice() << endl;
    shoppingCart.removeItem("Jeans");
    shoppingCart.displayItem();

    cout << "Total Price: Rs." << shoppingCart.calculatePrice() << endl;
}