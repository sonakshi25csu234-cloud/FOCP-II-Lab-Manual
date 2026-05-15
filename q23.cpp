#include<iostream>
using namespace std;
class Pattern{
    public:
    void display(){
        int n = 3;
        for(int i=1;i<=n;i++){
            for(int s=1;s<=n-i;s++)
                cout<<" ";
            cout<<"*";
            if(i>1){
                for(int s=1;s<=2*i-3;s++)
                    cout<<" ";
                cout<<"*";
            }
            cout<<endl;
        }
        for(int i=n-1;i>=1;i--){
            for(int s=1;s<=n-i;s++)
                cout<<" ";
            cout<<"*";
            if(i>1){
                for(int s=1;s<=2*i-3;s++)
                    cout<<" ";
                cout<<"*";
            }
            cout<<endl;
        }
    }
};

int main(){
    Pattern p;
    p.display();
    return 0;
}