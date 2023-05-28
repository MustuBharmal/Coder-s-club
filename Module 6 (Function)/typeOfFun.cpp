#include <iostream>
using namespace std;

int multiply(int a, int b)
{
    return a * b;
}
void profile(string name, int age)
{
    cout << "The customer is " << name << " and his age is " << age << endl;
}
void profile();
float divisible()
{
    int a, b;
    cout << "Enter two values for divisible." << endl;
    cin >> a >> b;
    return a / b;
}
int main()
{

    // without arguement, without return type
    profile();

    // without arguement, with return type
    int ans = divisible();

    // with arguement, with return type
    int a = 9, b = 89;
    int res = multiply(ans, b);
    cout << res << endl;

    // with arguement, without return type
    string name = "Mustafa";
    int age = 23;
    profile(name, age);

    

    return 0;
}
void profile()
{
    cout << "The customer is Mustafa and his age is 23." << endl;
}