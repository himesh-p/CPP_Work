#include<iostream>
using namespace std;

class BankTrajection{
private:
    int t_id;
    string type;
public:
    BankTrajection(int t,string ty){
        t_id = t;
        type = ty;
    }
    void display(){
        cout << "The tranjection Id of this bank account is:- " << t_id << endl;
        cout << "The tranjection Type of this bank account is:- " << type << endl;
    }
};
int main(){

    BankTrajection obj(123 , "Saving");
    obj.display();
    return 0;
}