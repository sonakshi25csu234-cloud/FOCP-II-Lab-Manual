#include<iostream>
using namespace std;
class Pascal{
    int rows;
    public:
    void getData(){
        cout<<"Enter number of rows: ";
        cin>>rows;
    }
    void display(){
        for(int i=0;i<rows;i++){
            int num = 1;
            for(int j=0;j<=i;j++){
                cout<<num<<" ";
                num = num * (i - j) / (j + 1);
            }
            cout<<endl;
        }
    }
};
int main(){
    Pascal p;
    p.getData();
    p.display();
    return 0;
}