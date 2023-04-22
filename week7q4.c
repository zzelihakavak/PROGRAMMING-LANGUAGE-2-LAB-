#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>


int main() {
    char *sentence = NULL;
    int lengthoftext = 0, countofword = 0;
    int i;

    printf("Please enter your text: ");
    scanf("%m[^\n]", &sentence);

    lengthoftext = strlen(sentence);
    
    if (lengthoftext > 0) {
        countofword = 1;
    }

    for (i = 0; i < lengthoftext; i++) {
        if (isspace(sentence[i])) {
            countofword++;
        }
    }

    printf("Word count: %d\n", countofword);

    free(sentence);

    return 0;
}