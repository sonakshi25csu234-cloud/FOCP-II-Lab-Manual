// ques:1
#include <iostream>
using namespace std;
int main()
{
    int num1, num2;
    int sum;
    cout << "Enter first no.";
    cin >> num1;

    cout << "Enter 2nd no.";
    cin >> num2;

    sum = num1 + num2;
    cout << "The sum of two no. is:" << sum;

    return 0;

}

// ques:2
#include<iostream>
using namespace std;
int main(){
    int num1,num2;
    int sum;
    int sub;
    int div;
    int multiply;
    cout<<"Enterfirst number:";
    cin>>num1;
    cout<<"Enter second number:";
    cin>>num2;
    sum =num1+ num2;
    cout<<"\nThe sum of two number is"<<sum;

    sub =num1-num2;
    cout<<"\nThe sum of two number is"<<sub;

    multiply=num1*num2;
    cout<<"\nThe sum of two number is"<<multiply;

    div=num1/num2;
    cout<<"\nThe sum of two number is"<<div;
    return 0;


}
// ques :3
#include<iostream>
using namespace std;
int main(){
    int stu1,avg;
    int sub1,sub2,sub3,sub4,sub5;
    cout<<"Student1 marks";
    cout<<"Enter sub1 marks:";
    cin>>sub1;
    cout<<"Enter sun2 marks";
    cin>>sub2;
    cout<<"Ebter sub3 marks";
    cin>>sub3;
    cout<<"Enter sub4 marks";
    cin>>sub4;
    cout<<"Enter sub5 marks";
    cin>>sub5;
    avg = sub1+sub2+sub3+sub4+sub5/5;
    
    cout<<"The avg of student1 marks:"<<avg;
    
    return 0;


}

// WAP to calculate the average marks of a student in 5 subject 
// all the 5 subjects marks shall be entered at run time/ ny user 
#include <iostream>
using namespace std; 

int main(){

 float f, c;

cout << "Write the tempertaure in degree fahrenhiet ";
cin >> f;

c = (f - 32)*5/9;

cout << "\ntemperature in degree celcius is " << c;
return 0;

}
