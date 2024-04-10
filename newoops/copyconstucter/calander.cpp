#include<iostream>
using namespace std;

class CalenderEvent {
    private:
    string title;
    string date;
    string attendees[10];
    int size;

    public:
    CalenderEvent(string t, string d, string a[], int s) {
        title = t;
        date = d;
        size = s;
        for (int i = 0; i < size; i++) {
            attendees[i] = a[i];
        }
    }

    CalenderEvent(CalenderEvent& e) {
        title = e.title;
        date = e.date;
        size = e.size;
        for (int i = 0; i < size; i++) {
            attendees[i] = e.attendees[i];
        }
    }

    void display() {
        cout << "\nTitle: " << title << endl;
        cout << "Date: " << date << endl;
        cout << "Guests: ";
        for (int i = 0; i < size; i++) {
            cout << attendees[i] << ", ";
        }
        cout << "\b\b " << endl;
    }
};

int main() {
    string guests[] = {"Himesh", "Meet", "Dhruv", "Jeel"};
    int size = sizeof(guests)/sizeof(guests[0]);
    CalenderEvent event("newyear", "31stdec", guests, size);


    CalenderEvent event2(event);

    event.display();
    event2.display();

    return 0;
}