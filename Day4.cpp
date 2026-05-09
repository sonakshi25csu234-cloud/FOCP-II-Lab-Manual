// #include<iostream>
// using namespace std;
// class Addition{
//     int num1,num2;
//     int sum;
//     public:
//     void getData(){
//         cout<<"Enter first number";
//         cin>> num1;
//         cout<<"enter second number";
//         cin>>num2;
//     }
//     void sumNumber(){
//         sum= num1+num2;
//         cout<<"The sum of two numbers is:"<<sum;

//     }

// };
//  int main(){
//     Addition obj;
//     obj.getData();
//     obj.sumNumber();

//     return 0;
// }
// if (p1 > p2 && p1 > p3) {
//         cout << "Player 1 is the winner";
//     }
//     else if (p2 > p1 && p2 > p3) {
//         cout << "Player 2 is the winner";
//     }
//     else if (p3 > p1 && p3 > p2) {
//         cout << "Player 3 is the winner";
//     }
//     else if (p1 == p2 && p1 > p3) {
//         cout << "Player 1 and Player 2 are tied for the lead";
//     }
//     else if (p1 == p3 && p1 > p2) {
//         cout << "Player 1 and Player 3 are tied for the lead";
//     }
//     else if (p2 == p3 && p2 > p1) {
//         cout << "Player 2 and Player 3 are tied for the lead";
//     }
//     else {
//         cout << "All three players are tied";
//     }

// #include<iostream>
// using namespace std;

// class Event_id{
//     int id;

//     public:
//     void data(){
//         cout<<"Enter id:";
//         cin>>id;
//     }
//     void tags(){
//         if(id%3==0 && id%5==0)
//         cout<<"Buzz\nFuzz";

//         else if(id%3==0)
//         cout<<"Buzz";

//         else if(id %5==0)
//         cout<< "Fuzz";

        
//     }

// };
// int main(){
//     Event_id obj;
//     obj.data();
//     obj.tags();

//     return 0;
// }

// #include <iostream>
// using namespace std;

// class Alphabet
// {
//     public :

//     void comp(){
//     char alpha;

//     cout << "Enter Your alphabet (A-Z) : ";
//     cin >> alpha;

//     switch (alpha)
//     {
//     case 'a':
//     case 'e':
//     case 'i':
//     case 'o':
//     case 'u':
//     case 'A':
//     case 'E':
//     case 'I':
//     case 'O':
//     case 'U':
//         cout << "Vowel";
//         break;

//     default:
//         cout << "Consonant";
//     }
// }
// };

// int main (){
//     Alphabet obj;
//     obj.comp();

//     return 0;
// }
// #include <iostream>
// using namespace std;
// class Year
// {
//     private:
//     int year;
    
//     public:

//     void leap_year()
//     {
//        cout <<"Enter the year";
//         cin >> year;
    
//        if ( (year % 400 == 0) || year % 4 == 0 && year % 100 != 0){
//         cout <<"Leap year h!!!";
//        }
//        else{
//         cout << "Nhi h leap year..";
//        }

//     }
// };

// int main ()
// {
//     Year obj;
//     obj.leap_year();
// }
#include<iostream>
using namespace std;
class discount;
