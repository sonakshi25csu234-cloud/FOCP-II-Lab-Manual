// #include<iostream>
// using namespace std;
// #include<string>
// int main(){
//  string name;
//  getline(cin,name); 
// //  Get line func reads the entire line and it does not ignore the spaces which were present in the buffer memory
//  cout<<"The name is:"<< name;
    
 
// return 0;
// }

// int number;
// string name;
// cout<<"enter number";
// cin>>number;
// cout<<"Enter name";
// getline(cin,name);
// cout<<number;
// cout<<name;


// #include <iostream>
// using namespace std;

// int main() {
//     int n, target;
//     cin >> n;

//     int arr[n];
//     for(int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     cin >> target;

//     for(int i = 0; i < n; i++) {
//         for(int j = i + 1; j < n; j++) {
//             if(arr[i] + arr[j] == target) {
//                 cout << i << " " << j;
//                 return 0;
//             }
//         }
//     }

//     cout << "No pair found";
//     return 0;
// }
// Wap to add two numbers using functions by class object
// #include<iostream>
// using namespace std;
// class Addition{
   
//     public:
//     int sum(int a,int b){
//         return a+b;
//     }
// };
// int main(){
//     Addition a1;
//     int sum_two=a1.sum(8,9);
//     cout<<sum_two;

// }

// #include<iostream>
// using namespace std;

// class PrimeChecker {
// private:
//     int num;

// public:
//     void getNumber() {
//         cout << "Enter a number: ";
//         cin >> num;
//     }
//     bool isPrime() {
//         if (num <= 1)
//             return false;

//         for (int i = 2; i * i <= num; i++) {
//             if (num % i == 0)
//                 return false;
//         }
//         return true;
//     }
//     void displayResult() {
//         if (isPrime())
//             cout << num << " is a Prime number." << endl;
//         else
//             cout << num << " is NOT a Prime number." << endl;
//     }
// };

// int main() {
//     PrimeChecker obj;
//     obj.getNumber();
//     obj.displayResult();

//     return 0;


// }




// #include <iostream>
// #include <cmath>
// using namespace std;

// int main() {
//     int n, temp, digit, sumArm = 0, sumPerfect = 0;
//     cin >> n;

//     temp = n;
//     int digits = 0;
//     int t = n;

//     while (t > 0) {
//         digits++;
//         t /= 10;
//     }

//     while (temp > 0) {
//         digit = temp % 10;
//         sumArm += pow(digit, digits);
//         temp /= 10;
//     }

//     if (sumArm == n)
//         cout << n << " is an Armstrong number" << endl;
//     else
//         cout << n << " is NOT an Armstrong number" << endl;

//     for (int i = 1; i <= n / 2; i++) {
//         if (n % i == 0)
//             sumPerfect += i;
//     }

//     if (sumPerfect == n)
//         cout << n << " is a Perfect number" << endl;
//     else
//         cout << n << " is NOT a Perfect number" << endl;

//     return 0;
// }


// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     string id;
//     cin >> id;

//     int start = 0;
//     int end = id.length() - 1;
//     bool isPalindrome = true;

//     while (start < end) {
//         if (id[start] != id[end]) {
//             isPalindrome = false;
//             break;
//         }
//         start++;
//         end--;
//     }

//     if (isPalindrome)
//         cout << "The ID is a Palindrome";
//     else
//         cout << "The ID is NOT a Palindrome";

//     return 0;
// }

#include<iostream>
using namespace std;
int main(){
    int num;
    for(int i = 1;i<=3;i++){
        cout<<"\n";
        for(int j = 1;j<=3;j++){
            cout<<" ";
        }
    }
    return 0;
}
