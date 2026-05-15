#include<iostream>
using namespace std;
class Payroll{
    float salary[10];
    float total, avg;
    public:
    void getData(){
        cout<<"Enter salaries of 10 employees:\n";
        for(int i=0;i<10;i++){
            cin>>salary[i];
        }
    }
    void calculate(){
        total = 0;
        for(int i=0;i<10;i++){
            total += salary[i];
        }
        avg = total / 10;
    }
    void display(){
        cout<<"Total salary = "<<total<<endl;
        cout<<"Average salary = "<<avg<<endl;
    }
};
int main(){
    Payroll p;
    p.getData();
    p.calculate();
    p.display();
    return 0;
}