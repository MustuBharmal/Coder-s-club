// WTP to reverse String?

#include <stdio.h>
#include <string.h>
int main()
{
    char name[] = {"Mustafa"};
    // elements:- M u s t a f a \0
    // index:-    0 1 2 3 4 5 6 7

    // res:-        a f a t s u M
    // j:-          0 1 2 3 4 5 6
    int len = strlen(name);
    char res[len];
    int i = len, j = 0;
    while (name[j] != '\0')
    {
        res[j] = name[i - 1];
        i--;
        j++;
    }
    res[j] = '\0';
    printf("%s\n", res);

    return 0;
}