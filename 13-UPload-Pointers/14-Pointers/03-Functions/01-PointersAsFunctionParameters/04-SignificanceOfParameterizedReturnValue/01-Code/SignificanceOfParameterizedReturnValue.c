#include <stdio.h>

enum
{
    NEGATIVE = -1,
    ZERO,
    POSITIVE,
};

int main(void)
{
    // function declarations
    int Difference(int, int, int*);

    // variable declarations
    int ypp_a;
    int ypp_b;
    int ypp_answer, ypp_ret;

    // code
    printf("\n\n");
    printf("Enter Value of 'A': ");
    scanf("%d", &ypp_a);

    printf("\n\n");
    printf("Enter Value of 'B': ");
    scanf("%d", &ypp_b);

    ypp_ret = Difference(ypp_a, ypp_b, &ypp_answer);

    printf("\n\n");
    printf("Difference of %d And %d = %d\n\n", ypp_a, ypp_b, ypp_answer);

    if (ypp_ret == POSITIVE)
        printf("THe difference of %d And %d Is Positive!!!\n\n", ypp_a, ypp_b);
    else if (ypp_ret == NEGATIVE)
        printf("The Difference of %d and %d is NEGATIVE!!!\n\n", ypp_a, ypp_b);
    else
        printf("The Difference of %d and %d is Zero!!!\n\n", ypp_a, ypp_b);

    return 0;
}

int Difference(int x, int y, int *diff)
{
    // code
    *diff = x - y;

    if (*diff > 0)
        return (POSITIVE);
    else if (*diff < 0)
        return (NEGATIVE);
    else
        return (ZERO);
}
