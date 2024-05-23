//6. Create a class to model a calendar event with attributes like title, date, and attendees. Implement a copy constructor to enable duplicating calendar events for scheduling conflicts resolution.

#include<iostream>
using namespace std;

class CalanderEvent{
private:
    string name;
    string date;
    string attedence[10];
    int size;
public:
    CalanderEvent(string n, string d, string a[] , int s) : name(n) , date(d) , size(s){
        for (int  i = 0; i < size; i++){
            attedence[i] = a[i];
        }        
    }

    CalanderEvent(CalanderEvent &obj){
        name = obj.name;
        date = obj.date;
        size = obj.size;
        for (int  i = 0; i < size; i++){
            attedence[i] = obj.attedence[i];
        }   
    }


    void display(){
        cout << "The name of this Event is :- " << name << endl; 
        cout << "The Date of this Event is :- " << date << endl;
        cout << "The name of person who attend this event :- " << endl ;
        for (int  i = 0; i < size; i++){
            cout << " - " << attedence[i] << endl;
        }
    }
};

int main(){
    string guests[] = {"Himesh" , "Meet" , "Dhurv" , "Jeel" , "Shrey sir"};
    int size = sizeof(guests)/sizeof(guests[0]);
    CalanderEvent event1("New Year Party" , "31st December" , guests , size);

    // CalanderEvent event2(event1);
    event1.display();
    // event2.display();
    return 0;
}