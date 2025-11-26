#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100

int main() {
    char sentence[MAX_SIZE];
    char *charWalker;
    int vowelCounter = 0;

    printf("Enter a sentence: ");
    if (fgets(sentence, MAX_SIZE, stdin) == NULL) {
        return 1;
    }

    sentence[strcspn(sentence, "\n")] = '\0';

    charWalker = sentence;

    while (*charWalker != '\0') {
        char c = *charWalker;

        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            vowelCounter++;
        }

        charWalker++;
    }

    printf("\n--- STRING ANALYSIS REPORT ---\n");
    printf("Input String: \"%s\"\n", sentence);
    printf("Total Vowel Count: %d\n", vowelCounter);

    return 0;
}
