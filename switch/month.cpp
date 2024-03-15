#include<iostream>

using namespace std;
int main(){
            int choice;
            cout << "Enter the month of the number:-  ";
            cin >> choice;
            switch (choice)
            {
            case 1: cout << "\nJanuary";
                    break;
            case 2: cout << "\nFebruary";
                    break;
            case 3: cout << "\nMarch";
                    break;
            case 4: cout << "\nApril";
                    break; 
            case 5: cout << "\nMay";
                    break;  
            case 6: cout << "\nJune";
                    break;  
            case 7: cout << "\nJuly";
                    break;   
            case 8: cout << "\nAugest";
                    break; 
            case 9: cout << "\nSeptember";
                    break; 
            case 10: cout << "\nOctober";
                    break; 
            case 11: cout << "\nNavember";
                    break; 
            case 12: cout << "\nDecember";
                    break;                         
            }   
            return 0;
}