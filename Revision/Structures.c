/* Structures:- The structure in C is a user-defined data type
             that can be used to group items of possibly different types into a single type.
             the group of items is known as Members.
*/
#include <stdio.h>
struct Student
{
    char name[100];
    int rollNo;
    float marks;
};
int main()
{
    struct Student s[1]; // declaration
    // initialization of struct variable
    // fgets(s.name, 50, stdin);

    for (int i = 0; i < 1; i++)
    {
        scanf("%s %d %f", s[i].name, &s[i].rollNo, &s[i].marks);
    }
    for (int i = 0; i < 1; i++)
    {
        printf("The name of the student is: %s.\n", s[i].name);
        printf("The roll number of the student is: %d.\n", s[i].rollNo);
        printf("The marks of the student is: %.2f.\n", s[i].marks);
    }
    return 0;
}