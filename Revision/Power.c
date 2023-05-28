/*
WTP to calculate power.
*/
#include <stdio.h>
// return + arguement
int powerR(int x, int y)
{
    int res = 1;
    while (y != 0)
    {
        res *= x;
        y--;
    }
    return res;
}
// void + arguement
void powerV(int x, int y)
{
    int res = 1;
    while (y != 0)
    {
        res *= x;
        y--;
    }

    printf("the power is %d\n", res);
}
// int sumOfArr(int arr[]){
//     int res = 0;
//     for(int i = 0; i < 5; i++){
//         res += arr[i];
//     }
//     return res;
// }
int main()
{
    int base, power;
    printf("Enter the value for number and its power\n");
    scanf("%d %d", &base, &power);
    int res = 1;
    // 2^5 :- 2 * 2 * 2* 2 * 2
    // 2^7 :- 
    while (power != 0)
    {
        res *= base;
        power--;
    }

    int resR = powerR(base, power);
    powerV(base, power);
    return 0;
}