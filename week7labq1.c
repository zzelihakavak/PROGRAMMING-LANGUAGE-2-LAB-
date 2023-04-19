#include <stdio.h>
#include <string.h>

int main()
{
    char word1[50];
    char word2[50];
    int length1, length2;
    printf("Please enter first word:");
    scanf("%s", word1);

    printf("Please enter second word:");
    scanf("%s", word2);

    if (strcmp(word1, word2) == 0)
    {
        printf("LENGTH OF THESE WORDS ARE SAME");
    }
    else
    {
        length1 = strlen(word1);
        length2 = strlen(word2);

        if (length1 > length2)
        
            printf("First word is longer than second word");
        
        else

            printf("Second word is longer than first word");
    }

    return 0;
}