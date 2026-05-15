#include<iostream>
using namespace std;
int main(){
    int items,price = 0,total=0;
    cout<<"No. of items: ";
    cin>>items;
    for(int i=1;i<=items;i++){
        cout<<i<<" item price: ";
        cin>>price;
        total+=price;
    }
    if(items>=1000){
        cout<<"total price: "<<total*0.9;
    }
    else{
        cout<<"total price: "<<total;
    }
    return 0;
}