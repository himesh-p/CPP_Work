#include<iostream>
using namespace std;

class Image {
    private:
    string name;
    string date;
    string size;

    public:
   Image(string n, string d, string s) {
        name = n;
        date = d;
        size = s;
    }

   Image(Image& i) {
        name = i.name;
        date = i.date;
        size = i.size;
    }

    void display() {
        cout << "\nname of photo: " << name << endl;
        cout << "Date: " << date << endl;
    }
};

int main() {
   
   Image n("img1.jpeg", "31/02/2023", "303kb");

   Image m(n);

    n.display();
    m.display();

    return 0;
}