#include<iostream>
using namespace std;
class QCSystem{
    int arr[5];
    int count;
    public:
    void getData(){
        cout<<"Enter 5 numbers:\n";
        for(int i=0;i<5;i++){
            cin>>arr[i];
        }
    }
    void check(){
        count = 0;
        for(int i=0;i<5;i++){
            if(arr[i] % 3 == 0 && arr[i] % 5 == 0){
                count++;
            }
        }
    }
    void display(){
        cout<<"Numbers divisible by both 3 and 5 = "<<count<<endl;
    }
};
int main(){
    QCSystem q;
    q.getData();
    q.check();
    q.display();
    return 0;
}