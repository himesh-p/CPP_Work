//3. "Design a 'Bank' class to represent a bank's financials. Use a static member variable 'totalAssets' to keep track of the sum of all customer account balances, and update it automatically every time a new account is created or an existing account balance changes."

#include<iostream>
#include<iomanip>
using namespace std;

class Bank{
private:
    int account_no[100];
    float balance[100];
    int count;
    static double totalAsset;
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
            // cout << "How many member if you want to add this bank:- " << endl;
            // cin >> count2;
            for (int i = 0; i < count; i++)
            {
            cout << endl  << "The account number is:- " << endl;
            cin >>  account_no[i];
            cout << "The account balance:- " << endl;
            cin >> balance[i];
            }  
    }
    void sumSalary(){
        double sum = 0;
        cout << "The sum of all salary is:- " << endl;
        for (int i = 0; i < count ; i++)
        {
             sum += balance[i];
        }
        cout << fixed << setprecision(6) << sum;
    }
};


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
    else if(ans == "NO"){
        cout << "Ok Fine. Thank you!" << endl;
    }
    obj.sumSalary();
    return 0;
}