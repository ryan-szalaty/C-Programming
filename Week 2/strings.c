#include <stdio.h>

int main(void) {
    char string[4] = "Hi!";
    int i = 0;
    while (string[i] != '\0') {
        printf("%c", string[i]);
        i++;
    }
    printf("\nLength of string: %i\n", i + 1);
}