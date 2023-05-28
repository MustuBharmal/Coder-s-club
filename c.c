#include<stdio.h>
int main(){
    int a;
    int b;
    float c;
    printf("Enter the value of a and b");
    scanf("%d %d", &a, &b);

    a += b;
    
    printf("The sum of a and b is %d, the value of b is", a, b);

    return 0;
}