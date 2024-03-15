#include<iostream>

using namespace std;

int main(){
            int a;
            cout << "\nEnter the age of candidate:-  ";
            cin >> a;
            if (a >= 21)
            {
                cout << "\nCongratulation! You are eligible for casting your vote.";
            }
            else{
                cout << "\nSorry, You are eligible not for casting your vote." ;
            }
            return 0;
}