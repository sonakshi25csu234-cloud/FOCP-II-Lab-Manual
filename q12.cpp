#include<iostream>
using namespace std;
int main(){
    int s1,s2,s3;
    cout<<"Enter side 1: ";
    cin>>s1;
    cout<<"Enter side 2: ";
    cin>>s2;
    cout<<"Enter side 3: ";
    cin>>s3;
    if(s1==s2 && s2==s3){
        cout<<"Equilateral Triangle.";
    }
    else if(s1==s2||s1==s3||s2==s3){
        cout<<"Isosceles Triangle.";
    }
    else{
        cout<<"Scalene Triangle.";
    }
    return 0;
}