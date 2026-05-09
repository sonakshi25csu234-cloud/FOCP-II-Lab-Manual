#include<iostream>
using namespace std;
// class Addition{
//     int a,b,c;
//     public:
//     void getData(){
//         cin>>a>>b;

//     }
//     void add1(){
//         c=a+b;
//         cout<<c;
//     }
//     void add2(int x,int y){
//         int z;
//         z=x+y;
//         cout<<z;
//     }
//     int add3(){
//         c=a+b;
//         return c;
//     }
//     int add4 (int x,int y){
//         return x+y;
//     }
// };
// int main()
// {
// Addition ob;
// ob.getData();
// ob.add1();
// ob.add2(5,9);
// ob.add3();
// cout<<ob.add4(14,15);
// }

class Largest{
        int a , b , c , largest=0;

        public:

        void GetData(){
            cout<< "Enter three nums: ";
            cin>> a >> b >> c;
        }

        void largestNo(){
            if(a>b && a>c){
                cout << "largest = " <<a;
            }
            else if (b>c && b>a){
                cout << "largest = " <<b;
            }
            else if (c>a && c>b){
              cout << "largest = " <<c;
            }
            else {
                cout << "Two or three nums are same" ;
            }
        }

    };

    int main(){

        Largest obj;
        obj.GetData();
        obj.largestNo();

        return 0;
    }
