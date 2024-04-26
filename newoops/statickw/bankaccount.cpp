//3. "Design a 'Bank' class to represent a bank's financials. Use a static member variable 'totalAssets' to keep track of the sum of all customer account balances, and update it automatically every time a new account is created or an existing account balance changes."

#include<iostream>
using namespace std;

class Bank{
private:
    int account_no[100];
    float balance[100];
    static int count;
    static int count2;
public:
    void addCostumer(){
        for (int i = 0; i < count; i++)
        {
            cout << endl  << "The account number is:- " << endl;
            cin >>  account_no[i];
            cout << "The account balance:- " << endl;
            cin >> balance[i]; 
        } 
    }
    void display(){
            for (int i = 0; i < count; i++)
            {
                cout << "The account no :- " << account_no[i] << endl;
                cout << "The balance :- " << balance[i] << endl;
            }
            
        }
    void addnewCostumer(){
            cout << "How many member if you want to add this bank:- " << endl;
            cin >> count2;
            for (int i = 0; i < count2; i++)
            {
            cout << endl  << "The account number is:- " << endl;
            cin >>  account_no[i];
            cout << "The account balance:- " << endl;
            cin >> balance[i]; 
            }  
    }
    void sumSalary(){
        float sum = 0;
        cout << "The sum of all salary is:- " << endl;
        for (int i = 0; i < (count+count2) ; i++)
        {
             sum += balance[i];
        }
        cout << sum;
    }
};

int Bank::count = 3;
int Bank::count2 = 2;
int main(){
    Bank obj;
    obj.addCostumer();
    obj.display();
    string ans;
    cout << endl << "If you want to add some new Customer the answer YES or NO:- " << endl;
    cin >> ans;
    if(ans == "YES"){
        obj.addnewCostumer();
    }
    obj.sumSalary();
    return 0;
}