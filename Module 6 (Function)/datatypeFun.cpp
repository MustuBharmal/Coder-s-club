#include <iostream>
#include <math.h>
using namespace std;
void add(){
    cout<<"how many numbers you want to add";

    int res = 30;
    cout<<res<<endl;
}
int main(){
    char choose;
    cout<<"type + for addition, type - for";

    switch (choose)
    {
    case '+':
        add();
        break;
    
    default:
        break;
    }
}