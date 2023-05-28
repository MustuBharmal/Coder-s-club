/*
    call by value and call by reference
    (copy of variable and sending the variable)
*/
#include <stdio.h>
void print(int n)
{
    n++;
    printf("funtions:- %d\n", n);
}
int main()
{
    int num = 10;
    num++;
    print(num);
    printf("main fun:- %d\n", num);

    // bad practice
    int size;
    scanf("%d", &size);
    int arr[size];
    // instead
    int arr[1000]; /* or */ int *arr;
    
    return 0;
}