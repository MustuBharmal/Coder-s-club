#include <stdio.h>
int main()
{
    int myAge;
    printf("Enter your age!");
    scanf("%d", &myAge);
    // if (myAge > 18)
    // {
    //     if (myAge < 50)
    //     {
    //         printf("You can drive");
    //     }
    //     else
    //     {
    //         printf("Your age is higher to drvie.");
    //     }
    // }
    // else
    // {
    //     printf("you can't drvie.");
    // }
    if (myAge > 21)
    {
        printf("You can write Gpse and upse");
    }
    else if (myAge < 32 && myAge > 25)
    {
        printf("You can write Gpse");
    }
    else if (myAge == 35)
    {
        printf("You can fight for Gpse exam");
    }
    else
    {
        printf("You can't appear for any exam");
    }
    return 0;
}