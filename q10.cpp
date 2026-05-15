#include <iostream>
using namespace std;
class Year
{
    private:
    int year;

    public:

    void leap_year()
    {
       cout <<"Enter the year";
        cin >> year;

       if ( (year % 400 == 0) || year % 4 == 0 && year % 100 != 0){
        cout <<"Its a Leap year !!!";
       }
       else{
        cout << "Not a leap year..";
       }

    }
};

int main ()
{
    Year obj;
    obj.leap_year();
    return 0;
}