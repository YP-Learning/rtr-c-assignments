#include <stdio.h>

int main(void)
{
    float ypp_fArray[10];
    float *ptr_ypp_fArray = NULL;
    int i;

    for (i = 0; i < 10; i++)
        ypp_fArray[i] = (float)(i + 1) * 1.5f;

    ptr_ypp_fArray = ypp_fArray;

    printf("\n\n");
    printf("Elements of the Float Array: \n\n");
    for (i = 0; i < 10; i++)
        printf("ypp_fArray[%d] = %f\n", i, *(ptr_ypp_fArray + i));

    printf("\n\n");
    printf("Elements of the loat Array \\w Addresses:\n\n ");
    for (i = 0; i < 10; i++)
        printf("ypp_fArray[%d] = %f \t\t Adress = %p\n", i, *(ypp_fArray + i), (ypp_fArray + i));

    printf("\n\n");

    return (0);
}
