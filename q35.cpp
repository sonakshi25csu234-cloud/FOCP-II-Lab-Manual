#include<iostream>
using namespace std;
class Matrix{
    int a[3][3], t[3][3];
    public:
    void getData(){
        cout<<"Enter 3x3 matrix:\n";
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                cin>>a[i][j];
            }
        }
    }
    void transpose(){
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                t[i][j] = a[j][i];
            }
        }
    }
    void display(){
        cout<<"Transpose matrix:\n";
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                cout<<t[i][j]<<" ";
            }
            cout<<endl;
        }
    }
};
int main(){
    Matrix m;
    m.getData();
    m.transpose();
    m.display();
    return 0;
}