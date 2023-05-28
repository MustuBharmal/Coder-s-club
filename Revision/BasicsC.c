#include<stdio.h>
#include<stdlib.h>
int main(){
    // keyword, identifiers, variable
    int num = 10;
    char a = 'm';
    char name[] = {"mustafa"}; // char array -> string
    int marks[] = {1,21,3,4,5,6};
// marks :- [1][21][3][4][5][GV]
    // for(int i = 0; i < 6; i++){
    //     printf("%d\n", marks[i]);
    // }
    char fullName[15];//%c, %s
    int rollNo; //%d

    scanf("%s %d", fullName, &rollNo);

    printf("My name is %s and my roll number is %d", fullName, rollNo);
    /*
    identifiers, keyword
    compiler and interpreter
    library
    declaration and initialization
    datatype
    in /output
    array
    */
    return 0;
}