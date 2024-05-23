//8. Build a class to simulate a digital image with a matrix of pixel values. Implement a copy constructor to ensure proper copying of the image data for image processing operations.

#include<iostream>
using namespace std;

// class Image {
//     private:
//     string name;
//     string date;
//     string size;

//     public:
//    Image(string n, string d, string s) {
//         name = n;
//         date = d;
//         size = s;
//     }

//    Image(Image& i) {
//         name = i.name;
//         date = i.date;
//         size = i.size;
//     }

//     void display() {
//         cout << "\nname of photo: " << name << endl;
//         cout << "Date: " << date << endl;
//     }
// };

// int main() {
   
//    Image n("img1.jpeg", "31/02/2023", "303kb");

//    Image m(n);

//     n.display();
//     m.display();

//     return 0;
// }
class Image{
private:
    string name;
    double size;
    string s_date;
public:
    Image(string n , double s , string sd) : name(n) ,size(s) , s_date(sd) {}

    Image(Image& obj){
        name =  obj.name;
        size = obj.size;
        s_date = obj.s_date;
    }
    
    void display(){}
};