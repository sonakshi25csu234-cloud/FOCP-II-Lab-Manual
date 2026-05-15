#include<iostream>
#include<string>
using namespace std;
class Password{
    string pass;
    public:
    void getPassword(){
        cout<<"Enter password: ";
        cin>>pass;
    }
    void check(){
        int upper=0, lower=0, digit=0, special=0;
        for(int i=0;i<pass.length();i++){
            if(pass[i]>='A' && pass[i]<='Z')
                upper=1;
            else if(pass[i]>='a' && pass[i]<='z')
                lower=1;
            else if(pass[i]>='0' && pass[i]<='9')
                digit=1;
            else if(pass[i]=='@' || pass[i]=='#' || pass[i]=='$' || pass[i]=='%' || pass[i]=='!' || pass[i]=='&' || pass[i]=='*')
                special=1;
        }
        if(upper && lower && digit && special)
            cout<<"Valid Password"<<endl;
        else
            cout<<"Invalid Password"<<endl;
    }
};
int main(){
    Password p;
    p.getPassword();
    p.check();
    return 0;
}