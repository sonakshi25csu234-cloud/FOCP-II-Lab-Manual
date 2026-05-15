#include<iostream>
#include<string>
using namespace std;
class PalindromeCheck{
    string id;
    public:
    void getID(){
        cout<<"Enter ID: ";
        cin>>id;
    }
    void check(){
        string rev="";
        for(int i=id.length()-1;i>=0;i--){
            rev = rev + id[i];
        }
        if(id==rev){
            cout<<"Palindrome ID"<<endl;
        }
        else{
            cout<<"Not a palindrome ID"<<endl;
        }
    }
};

int main(){
    PalindromeCheck p;
    p.getID();
    p.check();
    return 0;
}