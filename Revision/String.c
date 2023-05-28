/* char array is also known String.
String is the combinations of numbers, char, special symbols, space etc.
*/
#include<stdio.h>
#include<string.h>
int main(){
    char name[] = "Mustafa Bharmal";
    int len = strlen(name);
    char dName[] = {'M', 'u', 's', 't', 'a', 'f', 'a', '\0'};
    int marks[] = {1,2,3,4,5,6,7};
    // elements:- 1 2 3 4 5 6 7
    // index:-    0 1 2 3 4 5 6
    // elements:- M u s t a f a \0
    // index:-    0 1 2 3 4 5 6 7
    // array index start from 0 to size - 1
    // char array index start from 0 to size

    // scanf("%s", name);
    // we can get input without using address (&) in scanf. 
    
    // printf("%s", name); 
    // printf("%c\n", dName[7]);
    // printf("%d", len);
    // printf("%d", marks[7]);

    // about fget():- we can use fgets function to read string
    int size = 50;
    char eg[size];
    fgets(eg, size, stdin);
    puts(eg);
    return 0;
}
