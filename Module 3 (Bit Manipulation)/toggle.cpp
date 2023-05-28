#include<iostream>
using namespace std;
int main(){

    int num = 15, i = 4;

    int mask = 1 << (i - 1);
    int toggle = num ^ mask;
    cout<<toggle<<endl;
}