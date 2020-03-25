#include <stdio.h>

int main(void) {
    
    int letters[26] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int c;

    while ((c = getchar()) != EOF) {
        if (c >= 'a' && c <= 'z') {
            ++letters[c - 'a'];
        }
    }

    printf("Letter frequency: \n");

    for (int i = 0; i < 26; i++) {
        printf("%c: ", i + 'a');

        while (letters[i] != 0) {
            printf("|");
            --letters[i];
        }

        printf("\n");
    }
    
    return 0;
}