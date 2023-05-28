/*
Pointers:-  A pointer is defined as a derived data type that can 
            store the address of other C variables or a memory location
*/
#include<stdio.h>
int main(){
    int var = 10;
    var = 100;
    int * ptr;
    ptr = &var;
    *ptr = 50;
    int **ptr2;
    ptr2 = &ptr; 


    printf("%lu\n", ptr); // for address
    printf("value:- %d\n", *ptr); // for value
    printf("%lu\n", ptr2);
    printf("value in pointer of pointer:- %d\n", *ptr2);
    return 0;
    // values :-  [10]      [6422296]      [6422292]
    // names  :-   var         ptr            ptr2
    // address:-  6422296    6422292        6422288
}