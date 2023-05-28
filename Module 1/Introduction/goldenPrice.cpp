#include <iostream>
using namespace std;
// int maxi = -1;
// int sum =0;
int great = -1;
int add(int a, int sum)
{
    if (a <= 0)
    {
        // cout << sum << endl;
        return sum;
    }
    int b = a % 10;
    sum += b;
    return add(a / 10, sum);
}
int find(int a)
{
    if (a <= 0)
    {
        // cout<<great<<" ";
        return great;
    }
    great = max(great, a % 10);
    return find(a / 10);
}
int main()
{
    int X, Y, i;
    cin >> X >> Y;
    int n = Y - X;

    for (i = X; i <= Y; i++)
    {
        int c = add(i, 0);
        int d = find(i);
        // cout<<c<<" "<<d<<endl;
        int e = c - d;
        if (e == d)
        {
            cout<<c<<" ";
            break;
        }
    }
    int total = 0;
    for (int j = X; j <= Y; j++)
    {
        total += j;
    }
    total -= i;
    cout << total << endl;
    return 0;
}