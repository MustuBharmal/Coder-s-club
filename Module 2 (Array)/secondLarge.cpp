#include <iostream>
#include <climits>
using namespace std;
int largestEle(int arr[], int size)
{
    int largest = INT_MIN;
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    return largest;
}
int secondLargestEle(int arr[], int size)
{
    int largest = INT_MIN, slargest = INT_MIN;
    for (int i = 0; i < 6; i++)
    {
        if (arr[i] > largest)
        {
            slargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > slargest)
        {
            slargest = arr[i];
        }
    }
    return slargest;
}
int thirdLargestEle(int arr[], int size){
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
    return tLarge;
}
void main() 
{

    int arr[] = {2, 4, 3, 8, 9, -8};
    char a;
    // res = 8
    int size = sizeof(arr) / sizeof(arr[0]);
    int largest = largestEle(arr, size);
    int sLargest = secondLargestEle(arr, size);
    int tLargest = thirdLargestEle(arr, size);
    cout<<largest<<endl;
    cout << sLargest << endl;
    cout<<tLargest<<endl;
}