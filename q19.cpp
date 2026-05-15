#include<iostream>
using namespace std;
class PrimeRange{
    int start, end;
public:
void getRange(){
        cout<<"Enter starting number: ";
        cin>>start;
        cout<<"Enter ending number: ";
        cin>>end;
    }
    void findPrimes(){
        cout<<"Prime numbers are:\n";
        for(int i=start;i<=end;i++){
            int flag=0;
            if(i<=1)
                continue;
                for(int j=2;j<=i/2;j++){
                if(i%j==0){
                    flag=1;
                    break;
                }
            }
            if(flag==0)
                cout<<i<<" ";
        }
    }
};

int main(){
    PrimeRange p;
    p.getRange();
    p.findPrimes();
    return 0;
}