#include<iostream>
using namespace std;
class Stocks{
    int arr[5];
    int max1, max2;
    public:
    void getData(){
        cout<<"Enter 5 numbers:\n";
        for(int i=0;i<5;i++){
            cin>>arr[i];
        }
    }
    void findLargest(){
        max1 = arr[0];
        max2 = arr[1];
        if(max2 > max1){
            int temp = max1;
            max1 = max2;
            max2 = temp;
        }
        for(int i=2;i<5;i++){
            if(arr[i] > max1){
                max2 = max1;
                max1 = arr[i];
            }
            else if(arr[i] > max2 && arr[i] != max1){
                max2 = arr[i];
            }
        }
    }
    void display(){
        cout<<"Largest = "<<max1<<endl;
        cout<<"Second Largest = "<<max2<<endl;
    }
};
int main(){
    Stocks s;
    s.getData();
    s.findLargest();
    s.display();
    return 0;
}