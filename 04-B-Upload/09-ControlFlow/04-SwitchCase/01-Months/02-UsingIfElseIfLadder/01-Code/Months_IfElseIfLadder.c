#include <stdio.h>

int main(void)
{
    int ypp_num_month;

    // code
    printf("\n\n");
    printf("Enter Number of Month (1 to 12) : ");
    scanf("%d", &ypp_num_month);
    printf("\n\n");

    // If - Else If Ladder
    if (ypp_num_month == 1)
        printf("Month Number is %d Is January !!!\n\n", ypp_num_month);

    else if (ypp_num_month == 2)
        printf("Month Number is %d Is February !!!\n\n", ypp_num_month);
    
    else if (ypp_num_month == 3)
        printf("Month Number is %d Is March !!!\n\n", ypp_num_month);
    
    else if (ypp_num_month == 4)
        printf("Month Number is %d Is April !!!\n\n", ypp_num_month);
    
    else if (ypp_num_month == 5)
        printf("Month Number is %d Is May !!!\n\n", ypp_num_month);
    
    else if (ypp_num_month == 6)
        printf("Month Number is %d Is June !!!\n\n", ypp_num_month);
    
    else if (ypp_num_month == 7)
        printf("Month Number is %d Is July !!!\n\n", ypp_num_month);
    
    else if (ypp_num_month == 8)
        printf("Month Number is %d Is August !!!\n\n", ypp_num_month);
    
    else if (ypp_num_month == 9)
        printf("Month Number is %d Is September !!!\n\n", ypp_num_month);
    
    else if (ypp_num_month == 10)
        printf("Month Number is %d Is October !!!\n\n", ypp_num_month);
    
    else if (ypp_num_month == 11)
        printf("Month Number is %d Is November !!!\n\n", ypp_num_month);
    
    else if (ypp_num_month == 12)
        printf("Month Number is %d Is December !!!\n\n", ypp_num_month);
    
    else
        printf("Invalid Month Number %d Entered!!! Please Try Again...\n\n", ypp_num_month);

    printf("If - Else If Ladder Block Completed!!!\n\n");

    return (0);
}
