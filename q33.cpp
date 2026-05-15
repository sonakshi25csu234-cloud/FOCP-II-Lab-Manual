#include<iostream>
using namespace std;
class Marks{
    int m[3][5];
    public:
    void getData(){
        cout<<"Enter marks for 3 students (5 subjects each):\n";
        for(int i=0;i<3;i++){
            cout<<"Student "<<i+1<<":\n";
            for(int j=0;j<5;j++){
                cin>>m[i][j];
            }
        }
    }
    void display(){
        cout<<"Marks of 2nd subject of 1st student = "<<m[0][1]<<endl;
        cout<<"Marks of 5th subject of 3rd student = "<<m[2][4]<<endl;
    }
};
int main(){
    Marks obj;
    obj.getData();
    obj.display();
    return 0;
}