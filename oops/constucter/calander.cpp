//9. Design a class representing a calendar event with member variables for event name, date, and time. Write a constructor that takes these details as parameters.

#include<iostream>
using namespace std;

class Calander{
private:
    string name;
    string date;
    string time;
public:
    Calander(string n, string d, string i){
        name = n;
        date = d;
        time = i;
    }
    void display(){
        cout << endl << "The name of this event is:- " << name << endl;
        cout << "The date of this event is:- " << date << endl;
        cout << "The time of this event is:- " << time << endl;
    }
};
int main(){

    Calander obj("New Year Party" , "31st December 2023", "8.00 PM");
    obj.display();
    return 0;
}