#include<iostream>
using namespace std;
class Calculator{
    double a,b;
    public:
    void getNumbers(){
        cout<<"Enter two numbers: ";
        cin>>a>>b;
    }

    void add(){
        cout<<"Result = "<<a+b<<endl;
    }

    void subtract(){
        cout<<"Result = "<<a-b<<endl;
    }

    void multiply(){
        cout<<"Result = "<<a*b<<endl;
    }

    void divide(){
        if(b==0)
            cout<<"Division by zero is not allowed"<<endl;
        else
            cout<<"Result = "<<a/b<<endl;
    }
};

int main(){
    Calculator c;
    int choice;
    do{
        cout<<"\nCalculator Menu\n";
        cout<<"1. Addition\n";
        cout<<"2. Subtraction\n";
        cout<<"3. Multiplication\n";
        cout<<"4. Division\n";
        cout<<"5. Exit\n";
        cout<<"Enter your choice: ";
        cin>>choice;

        switch(choice){
            case 1:
                c.getNumbers();
                c.add();
                break;

            case 2:
                c.getNumbers();
                c.subtract();
                break;

            case 3:
                c.getNumbers();
                c.multiply();
                break;

            case 4:
                c.getNumbers();
                c.divide();
                break;

            case 5:
                cout<<"Calculator closed"<<endl;
                break;

            default:
                cout<<"Invalid choice"<<endl;
        }

    }while(choice!=5);

    return 0;
}