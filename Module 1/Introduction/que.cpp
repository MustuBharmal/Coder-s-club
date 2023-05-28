#include <iostream>
using namespace std;
int main()
{

    int noOfTickets;
    bool popCorn = false;

    cout << "Enter the no. of poeple" << endl;
    cin >> noOfTickets;
    cout << "Do you want popcorn or not\n";
    cin >> popCorn;

    int amount = noOfTickets * 200;
    if (noOfTickets >= 10)
    {
        int dis = amount * 0.1;
        amount = amount - dis;

        int amountPC = noOfTickets * 100;
        if (popCorn == true)
        {
            amount = amount + amountPC;

            cout << "Total amount: " << amount;
        }
        else
            cout << "Total amount: " << amount;
    }
    else
    {
        int amountPC = noOfTickets * 100;
        if (popCorn == true)
        {
            amount = amount + amountPC;

            cout << "Total amount: " << amount;
        }
        else
            cout << "Total amount: " << amount;
    }
    return 0;
}