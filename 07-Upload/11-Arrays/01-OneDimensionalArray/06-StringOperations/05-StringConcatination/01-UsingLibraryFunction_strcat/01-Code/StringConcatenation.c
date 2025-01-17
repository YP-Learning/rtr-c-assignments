#include <stdio.h>

#define MAX_STRING_LENGTH 512

int main(void)
{
    char ypp_chArray_one[MAX_STRING_LENGTH];
    char ypp_chArray_two[MAX_STRING_LENGTH];

    printf("\n\n");
    printf("Enter first string: \n\n");
    gets_s(ypp_chArray_one, MAX_STRING_LENGTH);

    printf("\n\n");
    printf("Enter second string: \n\n");
    gets_s(ypp_chArray_two, MAX_STRING_LENGTH);

    printf("\n\n");
    printf("##### Before Concatenation #####\n\n");
    printf("\n\n");
    printf("The Original First String Entered By You (i.e. : 'chArray_one[]') Is :\n\n");
    printf("%s\n", ypp_chArray_one);

    printf("\n\n");
    printf("The Original Second String Entered By You (i.e. : 'chArray_two[]') Is :\n\n");
    printf("%s\n", ypp_chArray_two);

    strcat(ypp_chArray_one, ypp_chArray_two);

    printf("\n\n");
    printf("##### After Concatenation #####\n\n");
    printf("\n\n");
    printf("'chArray_one[]' Is :\n\n");
    printf("%s\n", ypp_chArray_one);

    printf("\n\n");
    printf("'chArray_two[]' Is :\n\n");
    printf("%s\n", ypp_chArray_two);

    return (0);
}
