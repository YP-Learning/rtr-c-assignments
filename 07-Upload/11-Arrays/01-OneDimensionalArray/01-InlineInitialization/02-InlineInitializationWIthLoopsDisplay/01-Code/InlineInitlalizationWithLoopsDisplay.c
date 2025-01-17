#include <stdio.h>

int main(void)
{
    int ypp_iArray[] = { 9, 30, 6, 12, 98, 95, 20, 23, 2, 45 };
    int ypp_int_size;
    int ypp_iArray_size;
    int ypp_iArray_num_elements;

    float ypp_fArray[] = { 1.2f, 2.3f, 3.4f, 4.5f, 5.6f, 6.7f, 7.8f, 8.9f };
    int ypp_float_size;
    int ypp_fArray_size;
    int ypp_fArray_num_elements;

    char ypp_chArray[] = { 'A', 'S', 'T', 'R', 'O', 'M', 'E', 'D', 'I', 'C', 'O', 'M', 'P', '\0' };
    int ypp_char_size;
    int ypp_chArray_size;
    int ypp_chArray_num_elements;


    int i;
    printf("\n\n");
    printf("In-Line Initialization and Piece-meal Display of Elements of Array ypp_iArray[] : \n\n");

    ypp_int_size = sizeof(int);
    ypp_iArray_size = sizeof(ypp_iArray);
    ypp_iArray_num_elements = ypp_iArray_size / ypp_int_size;

    for (i = 0; i < 10; i++)
        printf("ypp_iArray[%d] (Element %d) = %d\n", i, i + 1, ypp_iArray[i]);

    printf("Size of Data type 'int' = %d bytes\n", ypp_int_size);
    printf("Number of Elements in Array 'ypp_iArray[]' = %d\n", ypp_iArray_num_elements);
    printf("Size of Array 'ypp_iArray[]' = %d bytes\n", ypp_iArray_size);

    printf("\n\n");
    printf("In-Line Initialization and Piece-meal Display of Elements of Array ypp_fArray[] : \n\n");

    ypp_float_size = sizeof(float);
    ypp_fArray_size = sizeof(ypp_fArray);
    ypp_fArray_num_elements = ypp_fArray_size / ypp_float_size;

    for (i = 0; i < 8; i++)
        printf("ypp_fArray[%d] (Element %d) = %f\n", i, i + 1, ypp_fArray[i]);

    printf("Size of Data type 'float' = %d bytes\n", ypp_float_size);
    printf("Number of Elements in Array 'ypp_fArray[]' = %d\n", ypp_fArray_num_elements);
    printf("Size of Array 'ypp_fArray[]' = %d bytes\n", ypp_fArray_size);

    printf("\n\n");
    printf("In-Line Initialization and Piece-meal Display of Elements of Array ypp_chArray[] : \n\n");
    
    ypp_char_size = sizeof(char);
    ypp_chArray_size = sizeof(ypp_chArray);
    ypp_chArray_num_elements = ypp_chArray_size / ypp_char_size;

    for (i = 0; i < 14; i++)
        printf("ypp_chArray[%d] (Element %d) = %c\n", i, i + 1, ypp_chArray[i]);

    printf("Size of Data type 'char' = %d bytes\n", ypp_char_size);
    printf("Number of Elements in Array 'ypp_chArray[]' = %d\n", ypp_chArray_num_elements);
    printf("Size of Array 'ypp_chArray[]' = %d bytes\n", ypp_chArray_size);

    return (0);
}
