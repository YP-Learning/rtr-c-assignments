#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main(void)
{
    char ypp_option, ypp_ch = '\0';

    printf("\n\n");
    printf("ONce the Infinite loop begins, enter 'Q' or 'q' to Quit the ininite for loop: \n\n");

    do
    {
        do
        {
            printf("\n");
            printf("In Loop...\n");
            ypp_ch = getch();
        } while (ypp_ch != 'Q' && ypp_ch != 'q');

        printf("\n\n");
        printf("EXitting user controlled infinite loop...");
        printf("\n\n");
        printf("Do You Want to begin user controlled infinite loop again? ... (Y/y - Yes, any other key - No) : ");
        ypp_option = getch();
    } while (ypp_option == 'Y' || ypp_option == 'y');

    return (0);
}