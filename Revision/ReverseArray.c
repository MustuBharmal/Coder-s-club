/*
Reverse of an array
*/
// 1 2 3 4 5 6
// 6 5 4 3 2 1
#include <stdio.h>

void reverse(int arr[], int size)
{
    
    int res[size];
    for (int i = 0; i < size; i++)
    {
        res[i] = arr[size - i - 1];
    }

    for (int i = 0; i < size; i++)
    {
        arr[i] = res[i];
        
    }
}
int main()
{

    int arr[] = {1, 2, 3, 4, 5};
    // swap alternate:- {2, 1, 4, 3, 5};
    // find unique element
    // find duplicate
    reverse(arr, 5);
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
