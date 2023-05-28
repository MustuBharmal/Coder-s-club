#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[] = {2, 3, 1, 8, 0, 5,7};
    int size = sizeof(arr)/ sizeof(arr[0]);
    int large = INT_MIN, sLarge = INT_MIN, tLarge = INT_MIN;

    for(int i = 0; i < size; i++){
        if(arr[i] > large){
            tLarge = sLarge;
            sLarge = large;
            large = arr[i];
        }
        else if(arr[i] > sLarge){
            tLarge = sLarge;
            sLarge = arr[i];
        }
        else if(arr[i] > tLarge){
            tLarge = arr[i];
        }
    }
    cout<<tLarge<<endl;
}