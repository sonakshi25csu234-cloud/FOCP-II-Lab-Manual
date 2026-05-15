#include<iostream>
using namespace std;
class Matrix{
    int a[10][10], b[10][10], c[10][10];
    int m,n,p,q;
    public:
    void getData(){
        cout<<"Enter rows and columns of first matrix: ";
        cin>>m>>n;
        cout<<"Enter rows and columns of second matrix: ";
        cin>>p>>q;
        if(n!=p){
            cout<<"Multiplication not possible"<<endl;
            return;
        }
        cout<<"Enter first matrix:\n";
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cin>>a[i][j];
            }
        }
        cout<<"Enter second matrix:\n";
        for(int i=0;i<p;i++){
            for(int j=0;j<q;j++){
                cin>>b[i][j];
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                c[i][j]=0;
                for(int k=0;k<n;k++){
                    c[i][j] += a[i][k]*b[k][j];
                }
            }
        }
        cout<<"Result matrix:\n";
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                cout<<c[i][j]<<" ";
            }
            cout<<endl;
        }
    }
};
int main(){
    Matrix obj;
    obj.getData();
    return 0;
}