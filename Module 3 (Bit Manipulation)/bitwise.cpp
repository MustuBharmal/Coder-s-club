#include <iostream>
using namespace std;
void oddEvenFun1(int num)
{
    if (num & 1 == 1)
    {
        cout << "Odd" << endl;
    }
    else
    {
        cout << "Even" << endl;
    }
}
void oddEvenFun2(int num)
{
    if (num == (num >> 1) << 1)
    {
        cout << "Even";
    }
    else
    {
        cout << "Odd";
    }
}
int main()
{
    // Bitwise Operators

    // cout<<~(7)<<endl;
    // cout<<~(13)<<endl;
    // cout<<"~(-8)"<<~(-8)<<endl;
    // cout<< (8 & 5)<<endl;
    // cout<<(8|5)<<endl;̥

    /* Right Shift and Left Shift Operators*/
    // 9 -> 1001 >> 1 -> 0100 (4)
    // 9 -> 1001 << 1 -> 10010 (2)
    // right shift
    // cout<<"-9>>1 = "<<(-9>>1)<<endl;
    // cout<<(9>>2)<<endl;
    // cout<<(9>>4)<<endl;

    // left shift
    //  cout<<(9<<1)<<endl;
    //  cout<<(9<<2)<<endl;
    //  cout<<(9<<4)<<endl;

    // cout << (9 >> 1) << endl;
    // cout << (9 << 1) << endl;

    // Odd Even Logic with the help of Bitwise Operator
    // 1001
    // 0001
    // -----
    //    1

    int num;
    cout << "Enter a number" << endl;
    cin >> num;
    oddEvenFun1(num);
    // 2nd Way
    oddEvenFun2(num);
    return 0;
}
