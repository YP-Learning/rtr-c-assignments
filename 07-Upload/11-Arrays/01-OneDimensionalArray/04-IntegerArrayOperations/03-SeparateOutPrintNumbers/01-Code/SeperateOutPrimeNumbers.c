#include <stdio.h>

#define NUM_ELEMENTS 10

int main(void)
{
    int ypp_iArray[NUM_ELEMENTS];
    int i, num, j, count = 0;

    printf("\n\n");

    printf("Enter Integer Elements For Array : \n\n");
    for (i = 0; i < NUM_ELEMENTS; i++)
    {
        scanf("%d", &num);

        if (num < 0)
            num = -1 * num;

        ypp_iArray[i] = num;
    }

    printf("\n\n");
    printf("Array Elements Are : \n\n");
    for (i = 0; i < NUM_ELEMENTS; i++)
        printf("%d\n", ypp_iArray[i]);

    printf("\n\n");
    printf("Prime Numbers Amongst The Array Elements Are : \n\n");

    for (i = 0; i < NUM_ELEMENTS; i++)
    {
        for (j = 1; j <= ypp_iArray[i]; j++)
        {
            if ((ypp_iArray[i] % j) == 0)
                count++;
        }

        if (count == 2)
            printf("%d\n", ypp_iArray[i]);

        count = 0;
    }

    return (0);
}
