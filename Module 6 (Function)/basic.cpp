#include<iostream>
using namespace std;
void add(){
    int a, b;
    cin>>a>>b;
    int res = a + b;
    cout<<res;
}
void sub();
// datatype or void function_names(){}
int main(){
    char op;
    cin>>op;
    switch (op)
    {
    case '+':
        add();
        break;
    case '-':
        sub();
        break;
    default:
        break;
    }
}
/*
functions:- its divides a progam into small segments
void function valued function
datatype variable_name;
*/
