/*
Fibonnaci Series:- 0 1 1 2 3 5 8 13 21 34
*/
#include <stdio.h>
int main()
{
    // 0 1 1 2 3
    // first = 2, second = 3
    int noOfEle;
    printf("Enter the number of element\n");
    scanf("%d", &noOfEle);
    // noOfEle = 8;
    int count = 2;
    int first = 0, second = 1;
    printf("%d %d ", first, second);
    while (count != noOfEle)
    {
        int nextNum = first + second;
        printf("%d ", nextNum);
        first = second;
        second = nextNum;
        count++;
    }
    return 0;
}
