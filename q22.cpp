#include<iostream>
using namespace std;
class Pattern{
    public:
    void display(){
        int rows = 14;
        int cols = 8;
        for(int i=1;i<=rows;i++){
            for(int j=1;j<=cols;j++){
                if(i==1 || i==rows || j==1 || j==cols)
                    cout<<"*";
                else
                    cout<<" ";
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