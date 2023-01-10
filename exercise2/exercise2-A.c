#include <stdio.h>

int main()
{
    int weekdayNum;
    printf("ENTER A NUMBER FROM 1-7: ");
    scanf("%d", &weekdayNum);
    if (weekdayNum > 0 && weekdayNum < 6)
    {
        printf("WEEKDAY");
    }
    else
    {
        printf("WEEKEND");
    }
    return 0;
}