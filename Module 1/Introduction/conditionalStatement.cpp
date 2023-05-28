#include <iostream>
using namespace std;

int main()
{

    // --> simple if

    // int age;
    // cout<<"Enter your age"<<endl;
    // cin>>age;
    // if (age >= 18)
    // {
    //     cout<<"elegible to vote!"<<endl;
    // }

    // --> if else

    // if (age >= 18)
    // {
    //     cout<<"elegible to vote!"<<endl;
    // }
    // else{
    //     cout<<"not elegible to vote!"<<endl;
    // }

    // --> nested if else

    // int noOfTickets, price = 200;
    // float paid = 1;
    // bool popcorn;
    // cout << "Enter total no. of people" << endl;
    // cin >> noOfTickets;
    // cout << "Do you want popcorn or not, say 1 for yes and 0 for no" << endl;
    // cin >> popcorn;

    // paid = noOfTickets * price;

    // if (noOfTickets >= 10)
    // {
    //     float discount = paid * (0.1);

    //     paid = noOfTickets * price - discount;

    //     if (popcorn == true)
    //     {
    //         paid = paid + (noOfTickets * 100);
    //         cout << "Total amount to be paid is: " << paid << endl;
    //     }
    //     else
    //     {
    //         cout << "Total amount to be paid is: " << paid << endl;
    //     }
    // }
    // else
    // {
    //     if (popcorn == true)
    //     {
    //         paid = paid + (noOfTickets * 100);
    //         cout << "Total amount to be paid is: " << paid << endl;
    //     }
    //     else
    //     {
    //         cout << "Total amount to be paid is: " << paid << endl;
    //     }
    // }

    
    // --> if else ladder

    // int a, b;
    // cout<<"Enter the value of 2 numbers"<<endl;
    // cin>>a>>b;
    // char c;
    // cout<<"Enter the operation you want to perform"<<endl;
    // cin>>c;

    // if(c == '+'){
    //     cout<<a + b;
    // }
    // else if(c == '-'){
    //     // if(a > b){
    //     //     cout<<a - b;
    //     // }
    //     // else{
    //     //     cout<<b - a;
    //     // }
    //     cout<<abs(a - b);
    // }
    // else if(c == '/'){
    //     cout<<a / b;
    // }
    // else {
    //     cout<<a * b;
    // }

    
    // --> switch case

    // char days;
    // cout<<"Enter the any day\n";
    // cin>>days;
    // switch (days)
    // {
    // case 's':
    //     cout<<"Sunday is a funday"<<endl;
    //     break;
    // case 'm':
    //     cout<<"Monday is a Toughday"<<endl;
    //     break;
    // case 't':
    //     cout<<"Tuesday is a happyday"<<endl;
    //     break;
    // case 'w':
    //     cout<<"Wednesday is a bunk day"<<endl;
    //     break;
    // case 'u':
    //     cout<<"Thrusday is a labour day"<<endl;
    //     break;
    // case 'f':
    //     cout<<"Friday is a luckyday"<<endl;
    //     break;
    
    // default:
    //     cout<<"Your day is a bad day."<<endl;
    //     break;
    // }

    
    // --> ternary operator

    // int a = 8, b = -1, c = 0;
    // int maxi;

    // maxi = a > b ? (a > c ? a : c ) : (b > c ? b : c);
    // cout<<"The greatest element is: "<<maxi<<endl;

    return 0;
}