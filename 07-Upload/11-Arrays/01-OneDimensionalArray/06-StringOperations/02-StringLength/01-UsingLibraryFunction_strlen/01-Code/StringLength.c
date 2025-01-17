#include <stdio.h>
#include <string.h>

#define MAX_STRING_LENGTH 512

int main(void)
{
    char ypp_chArray[MAX_STRING_LENGTH];
    int iStringLength = 0;

    printf("\n\n");
    printf("Enter a string: ");
    gets_s(ypp_chArray, MAX_STRING_LENGTH);

    printf("\n\n");
    iStringLength = strlen(ypp_chArray);
    printf("The Length Of The String Is : %d\n", iStringLength);

    return (0);
}
