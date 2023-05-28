/*
Why array don't follow copy or pass by value? 
*/
#include <stdio.h>
void print(int arr[])
{
    arr[0] = 6;
    printf("functions:- ");
    for(int i = 0; i < 5; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    
}
int main()
{
    // [   ]  [  ] [  ] [  ] [  ]
    // 222     226  230  234  238     
    int arr[] = {1, 2, 3, 4, 5};
    print(arr);
    arr[1] = 7;
    print(arr);
    printf("main functions:- ");
    for(int i = 0; i < 5; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}