#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    // for(int i = 0; i < n; i++){
    //     for(int j = 0; j < n; j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j <= 2 * i; j++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 1; j <= i + 1; j++)
    //     {
    //         cout << j << ' ';
    //     }
    //     cout << endl;
    // }

    for (int i = 0; i < 2 * n - 1; i++)
    {

        if (i <= n - 1)
        {
            for (int j = 0; j <= i; j++)
            {

                cout << "*";
            }
        }

        else
        {
            for (int k = (2 * n) - i - 1; k > 0; k--)
            {
                cout << "*";
            }
        }

        cout << endl;
    }
}