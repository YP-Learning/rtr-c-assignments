#include <stdio.h>

int main(void)
{
    int ypp_iArray[] = { 12, 24, 35, 48, 60, 72, 84, 96, 108, 120 };
    float ypp_fArray[] = { 9.8f, 8.7f, 7.6f, 6.5f, 5.4f };
    double ypp_dArray[] = { 1.222222, 2.333333, 3.444444 };
    char ypp_cArray[] = { 'A', 'S', 'T', 'R', 'O', 'M', 'E', 'D', 'I', 'C', 'O', 'M', 'P', '\0' };

    // code
    printf("\n\n");
    printf("Integer Array Elements and their addresses they occupy are as follows: \n\n");
    printf("ypp_iArray[0] = %d \t At Address : %p\n", *(ypp_iArray + 0), (ypp_iArray + 0));
    printf("ypp_iArray[1] = %d \t At Address : %p\n", *(ypp_iArray + 1), (ypp_iArray + 1));
    printf("ypp_iArray[2] = %d \t At Address : %p\n", *(ypp_iArray + 2), (ypp_iArray + 2));
    printf("ypp_iArray[3] = %d \t At Address : %p\n", *(ypp_iArray + 3), (ypp_iArray + 3));
    printf("ypp_iArray[4] = %d \t At Address : %p\n", *(ypp_iArray + 4), (ypp_iArray + 4));
    printf("ypp_iArray[5] = %d \t At Address : %p\n", *(ypp_iArray + 5), (ypp_iArray + 5));
    printf("ypp_iArray[6] = %d \t At Address : %p\n", *(ypp_iArray + 6), (ypp_iArray + 6));
    printf("ypp_iArray[7] = %d \t At Address : %p\n", *(ypp_iArray + 7), (ypp_iArray + 7));
    printf("ypp_iArray[8] = %d \t At Address : %p\n", *(ypp_iArray + 8), (ypp_iArray + 8));
    printf("ypp_iArray[9] = %d \t At Address : %p\n", *(ypp_iArray + 9), (ypp_iArray + 9));

    printf("\n\n");
    printf("Float Array Elements and their addresses they occupy are as follows: \n\n");
    printf("ypp_fArray[0] = %f \t At Address : %p\n", *(ypp_fArray + 0), (ypp_fArray + 0));
    printf("ypp_fArray[1] = %f \t At Address : %p\n", *(ypp_fArray + 1), (ypp_fArray + 1));
    printf("ypp_fArray[2] = %f \t At Address : %p\n", *(ypp_fArray + 2), (ypp_fArray + 2));
    printf("ypp_fArray[3] = %f \t At Address : %p\n", *(ypp_fArray + 3), (ypp_fArray + 3));

    printf("\n\n");
    printf("Double Array Elements and their addresses they occupy are as follows: \n\n");
    printf("ypp_dArray[0] = %lf \t At Address : %p\n", *(ypp_dArray + 0), (ypp_dArray + 0));
    printf("ypp_dArray[1] = %lf \t At Address : %p\n", *(ypp_dArray + 1), (ypp_dArray + 1));
    printf("ypp_dArray[2] = %lf \t At Address : %p\n", *(ypp_dArray + 2), (ypp_dArray + 2));

    printf("\n\n");
    printf("Character Array Elements and their addresses they occupy are as follows: \n\n");
    printf("ypp_cArray[0] = %c \t At Address : %p\n", *(ypp_cArray + 0), (ypp_cArray + 0));
    printf("ypp_cArray[1] = %c \t At Address : %p\n", *(ypp_cArray + 1), (ypp_cArray + 1));
    printf("ypp_cArray[2] = %c \t At Address : %p\n", *(ypp_cArray + 2), (ypp_cArray + 2));
    printf("ypp_cArray[3] = %c \t At Address : %p\n", *(ypp_cArray + 3), (ypp_cArray + 3));
    printf("ypp_cArray[4] = %c \t At Address : %p\n", *(ypp_cArray + 4), (ypp_cArray + 4));
    printf("ypp_cArray[5] = %c \t At Address : %p\n", *(ypp_cArray + 5), (ypp_cArray + 5));
    printf("ypp_cArray[6] = %c \t At Address : %p\n", *(ypp_cArray + 6), (ypp_cArray + 6));
    printf("ypp_cArray[7] = %c \t At Address : %p\n", *(ypp_cArray + 7), (ypp_cArray + 7));
    printf("ypp_cArray[8] = %c \t At Address : %p\n", *(ypp_cArray + 8), (ypp_cArray + 8));
    printf("ypp_cArray[9] = %c \t At Address : %p\n", *(ypp_cArray + 9), (ypp_cArray + 9));
    printf("ypp_cArray[10] = %c \t At Address : %p\n", *(ypp_cArray + 10), (ypp_cArray + 10));
    printf("ypp_cArray[11] = %c \t At Address : %p\n", *(ypp_cArray + 11), (ypp_cArray + 11));
    printf("ypp_cArray[12] = %c \t At Address : %p\n", *(ypp_cArray + 12), (ypp_cArray + 12));
    printf("ypp_cArray[13] = %c \t At Address : %p\n", *(ypp_cArray + 13), (ypp_cArray + 13));

    return (0);
}