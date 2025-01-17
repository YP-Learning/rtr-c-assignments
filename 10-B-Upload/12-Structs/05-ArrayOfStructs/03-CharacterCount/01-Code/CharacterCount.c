#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAX_STRING_LENGTH 1024

struct CharacterCount
{
    char ch;
    int ch_count;
} character_and_count[] = { { 'A', 0 }, 
                            { 'B', 0 }, 
                            { 'C', 0 }, 
                            { 'D', 0 }, 
                            { 'E', 0 }, 
                            { 'F', 0 }, 
                            { 'G', 0 }, 
                            { 'H', 0 }, 
                            { 'I', 0 }, 
                            { 'J', 0 }, 
                            { 'K', 0 }, 
                            { 'L', 0 }, 
                            { 'M', 0 }, 
                            { 'N', 0 }, 
                            { 'O', 0 }, 
                            { 'P', 0 }, 
                            { 'Q', 0 }, 
                            { 'R', 0 }, 
                            { 'S', 0 }, 
                            { 'T', 0 }, 
                            { 'U', 0 }, 
                            { 'V', 0 }, 
                            { 'W', 0 }, 
                            { 'X', 0 }, 
                            { 'Y', 0 }, 
                            { 'Z', 0 } };

#define SIZE_OF_ENTIRE_ARRAY_OF_STRUCTS sizeof(character_and_count)
#define SIZE_OF_ONE_STRUCT_FROM_THE_ARRAY_OF_STRUCTS sizeof(character_and_count[0])
#define NUM_ELEMENTS_IN_ARRAY (SIZE_OF_ENTIRE_ARRAY_OF_STRUCTS / SIZE_OF_ONE_STRUCT_FROM_THE_ARRAY_OF_STRUCTS)

int main(void)
{
    char ypp_str[MAX_STRING_LENGTH];
    int i, j, actual_string_length = 0;

    printf("\n\n");
    printf("Enter a String: ");
    gets_s(ypp_str, MAX_STRING_LENGTH);

    actual_string_length = strlen(ypp_str);

    printf("\n\n"); 
    printf("String Entered by You: %s\n", ypp_str);
    
    for (i = 0; i < actual_string_length; i++) 
    {
        for (j = 0; j < NUM_ELEMENTS_IN_ARRAY; j++)
        {
            ypp_str[i] = toupper(ypp_str[i]);
            if (ypp_str[i] == character_and_count[j].ch)
            {
                character_and_count[j].ch_count++;
            }
        }
    }

    printf("\n\n");
    printf("The Number of Occurences of All Characters From the Alphabet Are As Follows : \n\n");

    for (i = 0; i < NUM_ELEMENTS_IN_ARRAY; i++)
    {
        printf("Character %c: %d\n", character_and_count[i].ch, character_and_count[i].ch_count);
    }
    printf("\n\n");

    return (0);
}
