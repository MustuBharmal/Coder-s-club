// WTP to Concatinate(+) String.

#include <stdio.h>
#include <string.h>
int main()
{
    char name[] = "Mustafa";
    char sName[] = " Bharmal";
    int len = strlen(name);
    len += strlen(sName);

    char res[len];

    int i = 0, j = 0;

    while (name[i] != '\0')
    {
        res[i] = name[i];
        i++;
    }
    printf("%d\n",i);
    /* name :- M u s t a f a
       sName:-   B h a r m a l
       res:-   0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5
       value:- M u s t a f a   B h a r m a l \0   */
    
    while (sName[j] != '\0')
    {
        res[i + j] = sName[j];
        j++;
    }

    printf("%s\n", res);
    return 0;
}