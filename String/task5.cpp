//5. Problem Statement: Develop a program for a word game. Implement a function that checks if a player's guess matches the hidden word, considering both the characters and their positions.

//   Sample Test Case:
//   - Input: Guess: "rainbow", Hidden Word: "rainbow"
//   - Output: Correct guess!
#include<iostream>
using namespace std;


int main(){

    string hiden = "rainbow";
    string gause;
    cout << "Enter the any string based on your gausse:- " << endl;
    getline(cin,gause);
    int comparission = hiden.compare(gause);
    if(comparission == 0){
        cout << "Correct Guess!" << endl;
    }
    else{
        cout << "Wrong Guess!" << endl;
    }
    return 0;
}