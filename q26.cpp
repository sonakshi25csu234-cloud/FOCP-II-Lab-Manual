#include<iostream>
using namespace std;
class ReportCard{
    int m1,m2,m3,m4,m5;
    int total;
    float percentage;
    public:
    void getMarks(){
        cout<<"Enter marks of 5 subjects: ";
        cin>>m1>>m2>>m3>>m4>>m5;
    }
    void calculate(){
        total = m1+m2+m3+m4+m5;
        percentage = total/5.0;
    }
    void display(){
        cout<<"Total marks = "<<total<<endl;
        cout<<"Percentage = "<<percentage<<"%"<<endl;
    }
};
int main(){
    ReportCard r;
    r.getMarks();
    r.calculate();
    r.display();
    return 0;
}