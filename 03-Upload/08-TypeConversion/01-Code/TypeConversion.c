#include <stdio.h>

int main(void) 
{
    // Variable declarations
    int ypp_i, ypp_j;
    char ypp_ch_01, ypp_ch_02;

    int ypp_a, ypp_result_int;
    float ypp_f, ypp_result_float;

    int ypp_i_explicit;
    float ypp_f_explicit;

    // code
    printf("\n\n");

    // INTERCONVERSION and IMPLICIT TYPE_CASTING
    // between 'char' and 'int'
    ypp_i = 70;
    ypp_ch_01 = ypp_i;
    printf("I = %d\n", ypp_i);
    printf("Character 1 (after ch_01 = i) = %c\n\n", ypp_ch_01);

    ypp_ch_02 = 'Q';
    ypp_j = ypp_ch_02;
    printf("Character 2 = %c\n", ypp_ch_02);
    printf("J (after j = ch_02) = %d\n\n", ypp_j);

    // IMPLICIT CONVERSION of 'int' to 'float'
    ypp_a = 5;
    ypp_f = 7.8f;
    ypp_result_float = ypp_a + ypp_f;
    printf("Integer a = %d And Floating-Point Number of %f Added Gives Floating Point Sum = %f\n\n", ypp_a, ypp_f, ypp_result_float);

    ypp_result_int = ypp_a + ypp_f;
    printf("Integer a = %d And FLoating-Point Number %f Added Gives Integer Sum = %d\n\n", ypp_a, ypp_f, ypp_result_int);

    // EXPLICIT TYPE-CASTING
    ypp_f_explicit = 30.121885f;
    ypp_i_explicit = (int) ypp_f_explicit;

    printf("FLoating Point Numer which will be type casted explicitly = %f\n", ypp_f_explicit);
    printf("Resultant Integer After Explicit Type Casting of %f = %d\n\n", ypp_f_explicit, ypp_i_explicit);

    return (0);
}
