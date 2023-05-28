#include <iostream>
#include <climits>
using namespace std;
void deleteElementInArray(int arr[], int size, int delEle)
{
    int idx, i;
    for (i = 0; i < size; i++)
    {
        if (arr[i] == delEle)
        {
            idx = i;
            break;
        }
    }
    if (i == size)
    {
        cout << "the element do not exist in the array";
    }
    else
    {
        for (int j = idx; j < size - 1; j++)
        {
            arr[j] = arr[j + 1];
        }
        for (int i = 0; i < size - 1; i++)
        {
            cout << arr[i] << " ";
        }
    }
}
int largestElement(int arr[], int size)
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
int main()
{
    // 1st Question
    // delete an element at specific index
    int arr[] = {1, 2, 4, 6, 8, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    int delEle = 16;
    deleteElementInArray(arr, size, delEle);

    // cout<<"Enter the element which we want to delete";
    // cin>>del;

    // 2nd Question
    // largest element
    int arr[] = {-9, -8, -11, -6, -10};
    int sze = sizeof(arr) / sizeof(arr[0]);

    int largest = largestElement(arr, size);

    cout << largest << endl;

    return 0;
}
