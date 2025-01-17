#include <stdio.h>
#include <stdlib.h>

// defining struct
struct MyData
{
    int i;
    float f;
    double d;
};

int main(void)
{
    // variable declarations
    int ypp_i_size;
    int ypp_f_size;
    int ypp_d_size;
    int ypp_struct_MyData_size;
    int ypp_pointer_to_struct_MyData_size;

    typedef struct MyData* MyDataPtr;

    MyDataPtr pYppData;

    // code
    printf("\n\n");
    pYppData = (MyDataPtr) malloc(sizeof(struct MyData));

    if (pYppData == NULL)
    {
        printf("Failed to allocate memory to 'struct' !!! exitting now...\n\n");
        exit(0);
    }
    else
        printf("Successfully allocated memory to struct!!!\n\n");

    // assigining data
    pYppData->i = 30;
    pYppData->f = 11.46f;
    pYppData->d = 1.2995;

    // Displaing values of the data
    printf("\n\n");
    printf("Data members of struct are: \n\n");
    printf("i  %d\n", pYppData->i);
    printf("f  %f\n", pYppData->f);
    printf("d  %lf\n", pYppData->d);

    // calculating the sizes
    ypp_i_size = sizeof(pYppData->i);
    ypp_f_size = sizeof(pYppData->f);
    ypp_d_size = sizeof(pYppData->d);

    printf("\n\n");
    printf("Sizes of data members of struct are: \n\n");
    printf("SIze of 'i' = %d bytes\n", ypp_i_size);
    printf("SIze of 'f' = %d bytes\n", ypp_f_size);
    printf("SIze of 'd' = %d bytes\n", ypp_d_size);

    ypp_struct_MyData_size = sizeof(struct MyData);
    ypp_pointer_to_struct_MyData_size = sizeof(MyDataPtr);

    printf("\n\n");
    printf("SIzeof 'struct MyData': %d bytes\n\n", ypp_struct_MyData_size);
    printf("Size of Pointer ot struct MyData: %d bytes\n\n", ypp_pointer_to_struct_MyData_size);

    if (pYppData)
    {
        free(pYppData);
        pYppData = NULL;
        printf("Memory Allocated to Struct has been succesfully freed!!!\n\n");
    }

    return (0);
}
