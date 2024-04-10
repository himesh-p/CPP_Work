#include<iostream>
using namespace std;

class Music {
    private:
    string name;
    string artist;
    int year;

    public:
   Music(string n, string a, int y) {
        name = n;
        artist = a;
        year = y;
    }

   Music(Music& i) {
        name = i.name;
        artist = i.artist;
        year = i.year;
    }

    void display() {
        cout << "\nname of song:-  " << name << endl;
        cout << "name of artist:- : " << artist << endl;
        cout << "published year of the song:-  " << year << endl;
    }
};

int main() {
   
   Music n("Mere sapano ki rani", "Kishor Kumar", 1987);

   Music m(n);

    n.display();
    m.display();

    return 0;
}