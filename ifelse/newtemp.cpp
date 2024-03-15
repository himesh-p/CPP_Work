#include<iostream>

using namespace std;

int main(){
            int a;
            cout << "\nEnter the temprature:-  ";
            cin >> a;
            if (a<0)
            {
                cout << "\nFreezing weather";
            }
            else if (a>0 && a<10)
            {
               cout << "\nVery Cold weather";
            }
            else if (a>10 && a<20)
            {
               cout << "\nCold weather";
            }
            else if (a>20 && a<30)
            {
               cout << "\nNormal in Temp";
            } else if (a>30 && a<40)
            {
               cout << "\nIts Hot";
            }
            else
            {
                cout << "\nIts Very Hot";
            }
            
           return 0;
}