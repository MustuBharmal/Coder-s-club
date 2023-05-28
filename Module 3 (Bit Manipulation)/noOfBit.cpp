#include <iostream>
using namespace std;
int main()
{
    int num = 13, res = 0;
    // cout<<res<<endl;

    while (num > 0)
    {
        if (num & 1 == 1)
        {
            res++;
        }

        cout << res << endl;
        num = num >> 1;
    }
    cout << res << endl;
}