#include<iostream>
using namespace std;
void call_by_ref(int *arr){
    for(int i = 0; i < 3; i++){
        int temp = arr[i];
        arr[i] = arr[4 - i];
        arr[4 - i] = temp;
    }
}
int main(){
    int arr[] = {1,2,4,5,6};
    for(int i = 0; i < 5; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    call_by_ref(arr);
    cout<<"after call by ref:- ";
    for(int i = 0; i < 5; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}