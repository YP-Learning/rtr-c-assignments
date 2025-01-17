#include <stdio.h>

int main(void)
{
    int ypp_iArray[5][3] = {
        { 1, 2, 3 },
        { 2, 4, 6 },
        { 3, 6, 9 },
        { 4, 8, 12 },
        { 5, 10, 15 },
    }; // inline initialization

    int ypp_int_size;
    int ypp_iArray_size;
    int ypp_iArray_num_elements, ypp_iArray_num_rows, ypp_iArray_num_columns;
    int i, j;

    printf("\n\n");

    ypp_int_size = sizeof(int);

    ypp_iArray_size = sizeof(ypp_iArray);
    printf("Size Of Two Dimentional (2D) Integer Array Is = %d\n\n", ypp_iArray_size);

    ypp_iArray_num_rows = ypp_iArray_size / sizeof(ypp_iArray[0]);

    printf("Number of Rows in Two Dimentional (2D) Integer Array Is = %d\n\n", ypp_iArray_num_rows);

    ypp_iArray_num_columns = sizeof(ypp_iArray[0]) / ypp_int_size;
    printf("Number of Columns in Two Dimentional (2D) Integer Array Is = %d\n\n", ypp_iArray_num_columns);

    ypp_iArray_num_elements = ypp_iArray_num_rows * ypp_iArray_num_columns;
    printf("Number of Elements in Two Dimentional (2D) Integer Array Is = %d\n\n", ypp_iArray_num_elements);

    printf("\n\n");
    printf("Elements In The 2D Array : \n\n");

    for (i = 0; i < ypp_iArray_num_rows; i++)
    {
        printf("##### Row %d #####\n", i + 1);
        for (j = 0; j < ypp_iArray_num_columns; j++)
        {
            printf("ypp_iArray[%d][%d] = %d\n", i, j, ypp_iArray[i][j]);
        }

        printf("\n\n");
    }

    return (0);
}
