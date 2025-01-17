#include <stdio.h>

int main(void)
{
    int ypp_i_num, ypp_num, i;

    printf("\n\n");

    printf("Enter An Integer Value from which iteration must begin : ");
    scanf("%d", &ypp_i_num);

    printf("How Many Digits Do You Want to Print from %d Onwards? : ", ypp_i_num);
    scanf("%d", &ypp_num);

    printf("Printing Digits %d to %d: \n\n", ypp_i_num, ypp_i_num + ypp_num);

    for (i = ypp_i_num; i <= ypp_i_num + ypp_num; i++)
    {
        printf("\t%d\n", i);
    }

    printf("\n\n");

    return (0);
}
