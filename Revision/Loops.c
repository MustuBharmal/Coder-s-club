/*
entry control loops => while and for
exit control loops => do-while
*/
// indexing:- 0 to size - 1
#include <stdio.h>
int main()
{
    int score[] = {50, 9, 8, 7, 56};
    // for loop
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", score[i]);
    }
    printf("\n");
    // while loop
    int j = 0;
    int sum = 0;
    while (sum < 70)
    {
        printf("%d ", score[j]);
        sum += score[j];
        j++;
    }
    printf("\n");
    // do - while
    sum = 0;
    j = 0;
    do
    {
        printf("%d ", score[j]);
        sum += score[j];
        j++;
    } while (sum < 70);

    
    return 0;
}