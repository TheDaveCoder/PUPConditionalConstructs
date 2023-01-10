#include <stdio.h>

int main() {
    char letter;
    printf("ENTER A LETTER: ");
    scanf("%c", &letter);
    if(!(letter >= 'A' && letter <= 'Z')) {
        printf("LOWER CASE");
    } else {
        printf("UPPER CASE");
    }
    return 0;
}