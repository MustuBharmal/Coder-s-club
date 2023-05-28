#include<iostream>
using namespace std;
void binarySearch(int *arr, int n, int targetEle){
    int start = 0, end = n - 1;
    int flag = 0;
    while(start < end){
        int mid = (start + end) / 2;
        if(arr[mid] == targetEle){
            cout<<"We found it"<<endl;
            flag = 1;
            break;
        }
        else if(arr[mid] > targetEle){
            end = mid;
        }
        else{
            start = mid + 1;
        }
    }
    if(flag == 0){
        cout<<"Element is not found"<<endl;
    }
}
void linearSearch(int *arr, int n, int targetEle){
    bool flag = false;
    for(int i = 0; i < n; i++){
        if(arr[i] == targetEle){
            flag = true;
            cout<<"Element found"<<endl;
            break;
        }
    }
    if(flag == 0){
        cout<<"Element is not found"<<endl;
    }
}
int main(){

    int arr[] = {1, 2, 3, 5, 8, 9, 11};
    int n = sizeof(arr)/sizeof(arr[0]);
    int targetEle = 13;
    binarySearch(arr, n, targetEle);
    linearSearch(arr, n, targetEle);
    
}