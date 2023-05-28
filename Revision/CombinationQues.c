/*
To calculate nCr :- n = 8, r = 2. 8C2
                    nCr = n! / r!(n - r)!
                    n = 8, r = 2;
                    8!
                    ----  
                    2!(6!)
                    8 * 7
                    --
                    2
                    = 28
*/
#include <stdio.h>
int fact(int a)
{
    int res = 1;
    for (int i = 1; i <= a; i++)
    {
        res *= i;
    }
    return res;
}
float calculate(int n, int r)
{
    float numer = fact(n);
    int denom = fact(r) * fact(n - r);
    float res = numer / denom;
    return res;
}
int main()
{
    int n, r;
    printf("Enter the value of n and r\n");
    scanf("%d %d", &n, &r);
    float ans = calculate(n, r);
    printf("So, the ans is: %.1f", ans);
    return 0;
}