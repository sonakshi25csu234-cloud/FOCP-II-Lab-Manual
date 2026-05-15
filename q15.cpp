#include<iostream>
using namespace std;
class Largest{
    double n,l=0;
    double num[];
    public:
    void getData(){
        cout<<"No. of sales needs to be analyzed: ";
        cin>>n;
        for(int i = 0;i<n;i++){
            cout<<"Enter "<<i+1<<" Sales: ";
            cin>>num[i];
            if(l<num[i]){
                l=num[i];
            }
        }
        cout<<"Maximum Sale = "<<l;
    }

};
int main(){
    Largest l;
    l.getData();
    return 0;
}