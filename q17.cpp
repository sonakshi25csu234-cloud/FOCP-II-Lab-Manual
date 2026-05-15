#include<iostream>
using namespace std;
class NumberCheck{
    int num;
    public:
    void getNumber(){
        cout<<"Enter a number: ";
        cin>>num;
    }
    void checkPerfect(){
        int sum=0;
        for(int i=1;i<num;i++){
            if(num%i==0){
                sum+=i;
            }
        }

        if(sum==num && num!=0){
            cout<<"Perfect number"<<endl;
        }
        else{
            cout<<"Not a perfect number"<<endl;
        }
    }

    void checkArmstrong(){
        int temp=num;
        int sum=0;
        int rem;
        while(temp>0){
            rem=temp%10;
            sum=sum+(rem*rem*rem);
            temp=temp/10;
        }
        if(sum==num){
            cout<<"Armstrong number"<<endl;
        }
        else{
            cout<<"Not an Armstrong number"<<endl;
        }
    }
};

int main(){
    NumberCheck n;
    n.getNumber();
    n.checkPerfect();
    n.checkArmstrong();
    return 0;
}