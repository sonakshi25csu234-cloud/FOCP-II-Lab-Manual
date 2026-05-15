#include<iostream>
#include<string>
using namespace std;
class Username{
    string name;
    int valid;
    public:
    void getData(){
        cout<<"Enter username: ";
        cin>>name;
    }

    void check(){
        valid = 1;

        for(int i=0;i<name.length();i++){
            if(!( (name[i]>='A' && name[i]<='Z') || 
                  (name[i]>='a' && name[i]<='z') || 
                  (name[i]>='0' && name[i]<='9') )){
                valid = 0;
                break;
            }
        }
    }
    void display(){
        if(valid==1)
            cout<<"Valid username"<<endl;
        else
            cout<<"Invalid username"<<endl;
    }
};
int main(){
    Username u;
    u.getData();
    u.check();
    u.display();
    return 0;
}