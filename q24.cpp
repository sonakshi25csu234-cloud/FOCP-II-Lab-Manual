#include<iostream>
using namespace std;
class Pattern{
    public:
    void display(){
        for(int i=1;i<=5;i++){
            char ch='A';
            for(int j=1;j<=i;j++){
                cout<<ch;
                ch++;
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