#include <stdio.h>

int main(int argc, char *argv[], char *envp[])
{
    int i;

    printf("\n\n");
    printf("Hello World!!\n");
    printf("Number of Command Line Arguments = %d\n\n", argc);

    printf("COmmand Line Arguments Passed To This Program Are : \n\n");
    for (int i = 0; i < argc; i++)
    {
        printf("Command Line Argument Number %d = %s\n", i, argv[i]);
    }

    printf("\n\n");

    printf("First 20 Environment Variables Passed To This Program Are : \n\n");

    for (i = 0; i < 20; i++)
    {
        printf("Environment Variable Number %d = %s\n", i, envp[i]);
    }

    printf("\n\n");

    return (0);
}
