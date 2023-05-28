/*
Function:- it divides the whole program into small fractions.
           and executes them multiple.

Functions always has braces besides them.
Types of function:- Inbuilt Function and User Defined Function (UDF)
Inbuilt Function:- They are already defined in the library
UDF :- The functions which are defined by the user.

Varieties of Function:- void + arguement, void + no arguement
                        return type + arguement, return type + no arguement
*/
#include <stdio.h>
int sum(){
    int a = 3, b = 5;
    return a + b;
}
double multiply(double a, double b){
    return a*b;
}
int main()
{
    int ans = sum();
    double a = 8.7, b = 0.9;
    double res = multiply(a, b);
    printf("%d\n", ans);
    printf("%.2f\n", res);
}
