#include <stdio.h>

int main()
{
    int dayNum, hourStarted, durationMins;
    double callRate, bill;
    printf("Enter the day of the week in Numeric Form: ");
    scanf("%d", &dayNum);
    if (dayNum > 0 && dayNum < 6)
    {
        printf("Enter the hour the call started: ");
        scanf("%d", &hourStarted);
        if (hourStarted >= 6 && hourStarted < 18)
        {
            callRate = 2.50;
        }
        else if (hourStarted > 0 && hourStarted <= 24)
        {
            callRate = 2;
        }
        else
        {
            printf("Not a valid hour in the 24-hour format");
            return 1;
        }
    }
    else if (dayNum > 5 && dayNum < 8)
    {
        printf("Enter the hour the call started: ");
        scanf("%d", &hourStarted);
        callRate = 1.50;
    }
    else
    {
        printf("INPUT INVALID!");
        return 1;
    }
    printf("Enter the duration of the call in minutes: ");
    scanf("%d", &durationMins);
    bill = callRate * durationMins;
    printf("Bill Total: ");
    printf("%.2lf", bill);
    printf(" PHP");
    return 0;
}