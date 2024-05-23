//1. Create a class representing a musical playlist with a dynamic array of song objects. Implement a copy constructor to ensure a deep copy of the playlist, including all song details.

#include<iostream>
using namespace std;

class Muzic{
private:
    string name;
    string artist;
    int year;
public:
    Muzic(string n, string a, int y) : name(n) , artist(a) , year(y){}

    Muzic(Muzic &obj){
        name = obj.name;
        artist = obj.artist;
        year = obj.year;
    }

    void display(){
        cout << "The name of this song:- " << name << endl;
        cout << "The Artist of this song:- " << artist << endl;
        cout << "The year of this song:- " << year << endl;
    }
};

int main(){

    Muzic playlist1("Character Dilla Hai!!!" , "Pritam" , 2014);
    Muzic playlist2(playlist1);
    // display orignal playlist :- 

    playlist1.display();

    // display duplicate playlist :- 
    
    playlist2.display();
    return 0;
}