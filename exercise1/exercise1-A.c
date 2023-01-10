#include <stdio.h>

int main()
{
    double userInput;
    printf("Enter your number: ");
    scanf("%lf", &userInput);
    if (userInput < 0)
    {
        printf("NEGATIVE");
        return 0;
    }
    printf("POSITIVE");
    return 0;
}