#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char *text = NULL;
    int *letter_count = NULL;
    int text_length, i;

    printf("Enter text: ");
    scanf("%m[^\n]", &text);

    text_length = strlen(text);
    letter_count = (int *)calloc(100, sizeof(int));
    if (letter_count == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    for (i = 0; i < text_length; i++)
    {
        if (text[i] >= 'a' && text[i] <= 'z')
        {
            letter_count[text[i] - 'a']++;
        }
        else if (text[i] >= 'A' && text[i] <= 'Z')
        {
            letter_count[text[i] - 'A']++;
        }
    }

    printf("Number of letters:\n");
    for (i = 0; i < 26; i++)
    {
        if (letter_count[i] > 0)
        {
            printf(" number of %c: %d\n", 'a' + i, letter_count[i]);
        }
    }

    free(text);
    free(letter_count);

    return 0;
}