#include <stdio.h>
#include <string.h> //contains the strlen() function

int main(void) {
    char string[4] = "hi!";
    int i = 0;
    //Uppercase letters according to ASCII tables: -32 for uppercase, +32 for lowercase
    while (string[i] != '\0') {
        if (string[i] >= 'a' && string[i] <= 'z') {
            printf("%c", string[i] - 32);
        } else {
            printf("%c", string[i]);
        }
        i++;
    }
    printf("\nLength of string: %i\n", i + 1);
}