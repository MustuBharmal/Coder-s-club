/*256 -> 13
256 / 10 = 6 -> ans
25 / 10 = 5 -> 11,
2 / 10 = 0-> 11
%-> modulo
2 % 10 = 2*/
#include<iostream>
using namespace std;
int main(){
    
    int num;
    cin>>num;
    int res = 0;

    while(num > 0){
        res += num % 10;
        num = num / 10;
    }

    cout<<res<<endl;
}