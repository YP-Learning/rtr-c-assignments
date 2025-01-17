#include <stdio.h>

#define MAX_STRING_LENGTH 512

#define SPACE ' '

#define FULLSTOP '.'
#define COMMA ','
#define QUESTION_MARK '?'
#define EXCLAMATION '!'

int main(void)
{
    int MyStrlen(char[]);
    char MyToUpper(char);

    char ypp_chArray[MAX_STRING_LENGTH];
    char ypp_chArray_CapitalizedFirstLetterOfEeveryWord[MAX_STRING_LENGTH];
    int ypp_iStringLength;
    int i, j;

    printf("\n\n");
    printf("Enter a string: ");
    gets_s(ypp_chArray, MAX_STRING_LENGTH);

    ypp_iStringLength = MyStrlen(ypp_chArray);
    j = 0;
    for (i = 0; i < ypp_iStringLength; i++)
    {
        if (i == 0)
            ypp_chArray_CapitalizedFirstLetterOfEeveryWord[j] = MyToUpper(ypp_chArray[i]);
        else if (ypp_chArray[i] == ' ')
        {
            ypp_chArray_CapitalizedFirstLetterOfEeveryWord[j] = ypp_chArray[i];
            ypp_chArray_CapitalizedFirstLetterOfEeveryWord[j + 1] = MyToUpper(ypp_chArray[i + 1]);
            i++;
            j++;
        }
        else if (ypp_chArray[i] == FULLSTOP || ypp_chArray[i] == COMMA || ypp_chArray[i] == QUESTION_MARK || ypp_chArray[i] == EXCLAMATION)
        {
            ypp_chArray_CapitalizedFirstLetterOfEeveryWord[j] = ypp_chArray[i];
            ypp_chArray_CapitalizedFirstLetterOfEeveryWord[j + 1] = SPACE;
            ypp_chArray_CapitalizedFirstLetterOfEeveryWord[j + 2] = MyToUpper(ypp_chArray[i + 1]);

            j += 2;
            i++;
        }
        else
            ypp_chArray_CapitalizedFirstLetterOfEeveryWord[j] = ypp_chArray[i];
        
        j++;
    }

    ypp_chArray_CapitalizedFirstLetterOfEeveryWord[j] = '\0';

    printf("\n\n");
    printf("String ENtered By You Is : \n\n");
    printf("%s\n", ypp_chArray);

    printf("\n\n");
    printf("String After Capitalizing First Letter Of Every Word Is : \n\n");
    printf("%s\n", ypp_chArray_CapitalizedFirstLetterOfEeveryWord);

    return (0);
}

int MyStrlen(char str[])
{
    int j;
    int string_length = 0;

    for (j = 0; j < MAX_STRING_LENGTH; j++)
    {
        if (str[j] == '\0')
            break;
        else
            string_length++;
    }

    return (string_length);
}

char MyToUpper(char ch)
{
    int num;
    int c;

    num = 'a' - 'A';

    if ((int) ch >= 97 && (int) ch <= 122)
        c = (int) ch - num;
    else
        c = (int) ch;

    return (char)(c);
}
