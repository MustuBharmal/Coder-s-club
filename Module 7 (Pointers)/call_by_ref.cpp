#include<iostream>
using namespace std;
void call_by_val(int a, int b){
    int temp = a;
    a = b;
    b = temp;
    cout<<"After swapping:- "<<a<<" and "<<b<<endl;
}
void call_by_ref(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}
int main(){
    int a = 10;
    int b = 30;
    cout<<a<<" and "<<b<<endl;
    call_by_val(a, b);
    cout<<a<<" and "<<b<<endl;
    call_by_ref(a, b);
    cout<<a<<" and "<<b<<endl;
    
}