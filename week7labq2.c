#include <stdio.h>
#include <string.h>

int main() {
    char text[100], word[20];
    int len_text, len_word, i, j, k;

    printf("Enter a text: ");
    scanf("%[^\n]", text);

    printf("Enter a word: ");
    scanf("%s", word);

    len_text = strlen(text);
    len_word = strlen(word);

    printf("Indices where the word appears: ");
    for (i = 0; i <= len_text - len_word; i++) {
        k = i;
        for (j = 0; j < len_word; j++) {
            if (text[k] != word[j])
                break;
            k++;
        }
        if (j == len_word)
            printf("%d ", i);
    }

    printf("\n");

    return 0;
}