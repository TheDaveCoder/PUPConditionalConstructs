#include <stdio.h>

int main()
{
    int serviceYears;
    double bonus, salary;
    printf("Enter the number of years that you've been in service: ");
    scanf("%d", &serviceYears);
    if (serviceYears > 20)
    {
        bonus = .5;
    }
    else
    {
        switch (serviceYears)
        {
        case 0 ... 5:
            bonus = 0.2;
            break;
        case 6 ... 10:
            bonus = 0.25;
            break;
        case 11 ... 15:
            bonus = 0.3;
            break;
        case 16 ... 20:
            bonus = 0.35;
            break;
        default:
            printf("INVALID INPUT");
            return 1;
        }
    }
    printf("Enter your current salary: ");
    scanf("%ld", &salary);
    printf("Your Bonus: ");
    printf("%ld", salary * bonus);
    return 0;
}