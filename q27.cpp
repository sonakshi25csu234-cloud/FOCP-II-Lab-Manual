#include<iostream>
using namespace std;
class Prices{
    float items[10];
    float max;
    public:
    void getPrices(){
        cout<<"Enter prices of 10 items:\n";
        for(int i=0;i<10;i++){
            cin>>items[i];
        }
    }
    void findMax(){
        max = items[0];
        for(int i=1;i<10;i++){
            if(items[i] > max){
                max = items[i];
            }
        }
    }
    void display(){
        cout<<"Maximum price is "<<max<<endl;
    }
};
int main(){
    Prices p;
    p.getPrices();
    p.findMax();
    p.display();
    return 0;
}