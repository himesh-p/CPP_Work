#include<iostream>
using namespace std;

class Profile{
private:
    string p_name;
    string likes;
    string comments;
public:
    Profile(string p, string l , string c){
        p_name = p;
        likes = l;
        comments = c;
    }

    Profile(Profile& obj){
        p_name = obj.p_name;
        likes = obj.likes;
        comments = obj.comments;
    }
    void display(){
        cout << "The name of Profile:- " << p_name <<  endl;
        cout << "The likes in your post:- " << likes << endl;
        cout << "The comments in your post:- " << comments << endl;
    }
};

int main(){

    Profile o1("Himesh_patel_50" , "34.5k" , "12.3k");

    Profile o2(o1);
    o1.display();
    cout << endl << endl;
    o2.display();
    return 0;
}