#include <stdio.h>

int main()
{
    int txtMessages;
    double totalCharge;
    printf("Enter the number of Text Messages: ");
    scanf("%d", &txtMessages);
    if (txtMessages > 200)
    {
        totalCharge = ((txtMessages - 200) * 0.5);
    }
    else if (txtMessages <= 200)
    {
        printf("\nNo charges incurred");
    }
    else
    {
        printf("INVALID INPUT");
        return 1;
    }
    printf("\nText Messages ");
    printf("%10d", txtMessages);
    printf(" MSG");
    printf("\n----------------------------");
    printf("\nTotal Charge ");
    printf("%11.2lf", totalCharge);
    printf(" PHP");
    return 0;
}