#include<iostream>
using namespace std;
class Pattern{
    public:
    void display(){
        for(int i=5;i>=1;i--){
            for(int j=5;j>=6-i;j--){
                cout<<j<<" ";
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