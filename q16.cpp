#include<iostream>
using namespace std;

class PrimeCheck{
    int num;
    int flag;
    public:
    void getNumber(){
        cout<<"Enter a number: ";
        cin>>num;
    }
    void check(){
        flag=0;
        for(int i=2;i<=num/2;i++){
            if(num%i==0){
                flag=1;
                break;
            }
        }
    }

    void display(){
        if(num<=1)
            cout<<"Not a prime number"<<endl;
        else if(flag==0)
            cout<<"Prime number"<<endl;
        else
            cout<<"Not a prime number"<<endl;
    }
};

int main()
{
    PrimeCheck p;
    p.getNumber();
    p.check();
    p.display();
    return 0;
}