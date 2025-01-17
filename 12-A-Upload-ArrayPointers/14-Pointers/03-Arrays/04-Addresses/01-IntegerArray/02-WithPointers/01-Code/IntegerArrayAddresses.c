#include <stdio.h>

int main(void)
{
    int ypp_iArray[10];
    int *ptr_ypp_iArray = NULL;
    int i;

    for (i = 0; i < 10; i++)
        ypp_iArray[i] = (i + 1) * 3;

    ptr_ypp_iArray = ypp_iArray;

    printf("\n\n");
    printf("Elements of the Integer Array: \n\n");
    for (i = 0; i < 10; i++)
        printf("ypp_iArray[%d] = %d\n", i, *(ptr_ypp_iArray + i));

    printf("\n\n");
    printf("Elements of the Integer Array \\w Addresses: ");
    for (i = 0; i < 10; i++)
        printf("ypp_iArray[%d] = %d \t\t Adress = %p\n", i, *(ypp_iArray + i), (ypp_iArray + i));

    printf("\n\n");
     
    return (0);
}
