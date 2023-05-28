#include <iostream>
#define stringify(name) #name
using namespace std;
int main()
{
    // declaration of an array
    int age[4];

    // declaratioin + initialization
    string name [] = {"mustafa", "dev", "meet", "murtaza"};
    // in an array indexing start from 0 to size - 1
    // size - 1 = last index of an array
    int size1 = sizeof(name)/sizeof(name[0]);
    cout<<"mustafa"<<endl;
    for (int i = 0; i < size1; i++)
    {
        cout << name[i] << " ";
    }
    cout<<size1<<" ";
    age[0] = 12;
    age[1] = 13;
    age[2] = 14;
    age[3] = 15;
    age[4] = 16;
    // for (int i = 0; i < 4; i++)
    // {
    //     cout<<age[i]<<" ";
    // }
    // cout<<age[2];
    // cout<<age[0]<<" "<<age[1]<<" "<<age[2]<<" "<<age[3];

    // int arr[] = {2,3,6,8,9};






    
    return 0;
}