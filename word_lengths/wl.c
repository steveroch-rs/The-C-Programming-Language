#include <stdio.h>
#define MAX_LENGTH 20

int main(void) {
    
    int lengths[MAX_LENGTH] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int c;
    int length = 0;

    while ((c = getchar()) != EOF) {
        if (c != ' ' && c != '\t' && c != '\n') {
            ++length;
        } else {
            ++lengths[length - 1];
            length = 0;
        }
    }

    printf("Word lengths from 1 to 10 have occured this much: \n");

    for (int i = 0; i < MAX_LENGTH; i++)
    {
        if (i < 9) {
            printf("0");
        }
        
        printf("%d: ", i + 1);
        while (lengths[i] != 0)
        {
            printf("|");
            lengths[i]--;
        }
        printf("\n");
    }
    
    return 0;
}