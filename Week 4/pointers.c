#include <stdio.h>

/*int main(void) {
    int n = 50;
    int *p = &n; //store memory address where value is stored;
    printf("%p\n", p);
    printf("%i\n", *p);
}*/

void pointer_math(void) {
    int numbers[] = {6, 7, 3, 8, 9, 2, 3};
    int length = sizeof(numbers) / sizeof(numbers[0]);
    int counter = 0;
    while (counter < length) {
        printf("%i", *(numbers + counter));
        counter++;
    }
    printf("%c", '\n');
}

int main(void) {
    char *string = "HI!";
    char *p = &string[0];
    pointer_math();
     printf("%p\n", string);
     printf("%p\n", p);
    for (int i = 0; string[i] != '\0'; i++) {
        printf("%c", string[i]);
    }
    for (int i = 0; i < 3; i++) {
        printf("%c", *(string + i)); //directly using hexadecimal;
    }
}