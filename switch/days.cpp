#include<iostream>

using namespace std;
int main(){
            int choice;
            cout << "Enter the days of the number:-  ";
            cin >> choice;
            switch (choice)
            {
            case 1: cout << "\nMonday";
                    break;
            case 2: cout << "\nTuesday";
                    break;
            case 3: cout << "\nWednsday";
                    break;
            case 4: cout << "\nThursday";
                    break; 
            case 5: cout << "\nFridayday";
                    break;  
            case 6: cout << "\nSatureday";
                    break;  
            case 7: cout << "\nSunday";
                    break;                           
            }   
            return 0;
}