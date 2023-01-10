#include <stdio.h>

int main()
{
    int numA, numB;
    printf("ENTER THE FIRST NUMBER: ");
    scanf("%d", &numA);
    printf("ENTER THE SECOND NUMBER: ");
    scanf("%d", &numB);
    if (numA < numB)
    {
        printf("NUMBER1 IS SMALLER");
    }
    if (numA > numB)
    {
        printf("NUMBER2 IS SMALLER");
    }
    if (numA == numB)
    {
        printf("NUMBER1 AND NUMBER2 ARE EQUAL");
    }
}