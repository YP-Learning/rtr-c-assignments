#include <stdio.h>

#define MAX_STRING_LENGTH 512

int main(void)
{
    char ypp_chArray[MAX_STRING_LENGTH];

    printf("\n\n");
    printf("Enter a string: ");
    gets_s(ypp_chArray, MAX_STRING_LENGTH);

    printf("\n\n");
    printf("Stirng You entered Is : \n\n");
    printf("%s\n", ypp_chArray);

    return (0);
}
