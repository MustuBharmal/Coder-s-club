#include <iostream>
using namespace std;
int main()
{
    enum Days
    {
        Sunday,
        Monday,
        Tuesday,
        Wednesday,
        Thrusday,
        Friday,
        Saturday
    };
    int noOfDays;
    cout << "Enter your fav day in numbers" << endl;
    cin >> noOfDays;
    switch (noOfDays)
    {
    case Monday:
        cout << "Your fav day is Monday";
        break;
    case Tuesday:
        cout << "Your fav day is Tuesday";
        break;
    case Wednesday:
        cout << "Your fav day is Wednesday";
        break;
    case Thrusday:
        cout << "Your fav day is Thrusday";
        break;
    case Friday:
        cout << "Your fav day is Friday";
        break;
    case Saturday:
        cout << "Your fav day is Saturday";
        break;
    case Sunday:
        cout << "Your fav day is Sunday";
        break;
    default:
        cout<<"Invalid day";
        break;
    }
}