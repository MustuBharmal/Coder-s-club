#include<iostream>
#include<climits>
using namespace std;
int main(){

    /* conditional statement
    2 category

    1. pehle condition check karo phir execute
        for loop and while loop

    2. pehle execute phir condition check karo
        do while loop*/ 
    
    // --> for loop
    // int a;
    // a = 0;
    // scanf("%d", &a);
    // cin>>a;
    // printf("Hii, Shivam bhaiya\n");

    // for (int i = 1; i <= 10; i++)
    // {
    //     cout<<i<<" -> hello! Mohammed"<<endl;
    // }
    


    // --> for loop
    // --> while loop
    // --> do while loop


    int mini = INT_MAX;
    int maxi = INT_MIN;

    int n = 5;
    for(int i = 0; i < n; i++){
        int a;
        cin>>a;
        if(mini > a){
            mini = a;
        }
        if(maxi < a){
            maxi = a;
        }
    }
    cout<<"minimum value is: "<<mini<<endl;
    cout<<"max value is: "<<maxi<<endl;
    return 0;
}