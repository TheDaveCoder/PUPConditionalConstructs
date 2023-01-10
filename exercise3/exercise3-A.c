#include <stdio.h>

int main()
{
    int dayNum;
    printf("Howdy! Please enter a numeric day in a week: ");
    scanf("%d", &dayNum);
    if (dayNum == 1)
    {
        printf("Number %d ", dayNum);
        printf("is Monday!");
    }
    else if (dayNum == 2)
    {
        printf("Number %d ", dayNum);
        printf("is Tuesday!");
    }
    else if (dayNum == 3)
    {
        printf("Number %d ", dayNum);
        printf("is Wednesday!");
    }
    else if (dayNum == 4)
    {
        printf("Number %d ", dayNum);
        printf("is Thursday!");
    }
    else if (dayNum == 5)
    {
        printf("Number %d ", dayNum);
        printf("is Friday!");
    }
    else if (dayNum == 6)
    {
        printf("Number %d ", dayNum);
        printf("is Saturday!");
    }
    else if (dayNum == 7)
    {
        printf("Number %d ", dayNum);
        printf("is Sunday!");
    }
    else
    {
        printf("INVALID INPUT");
    }
    return 0;
}