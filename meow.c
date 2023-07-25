#include <stdio.h>

void meow(void) {
    printf("MEOW!\n");
}

int number;

int get_number(void) {
    printf("How many times would you like to meow? Please input a number between 1 and (excluding) 10:\n");
    //Check that user is inputting an integer
    while(scanf("%d", &number) != 1 || number < 1 || number > 9) {
        printf("Please input a valid number.\n");
        while (getchar() != '\n'); //Remove any non-integer input

    }
    return number;
}

int main (void) {
    int n = get_number();
    int counter = 0;

    printf("While loop.\n");
    while (counter < n) {
        meow();
        counter++;
    }
    printf("For loop.\n");
    for (counter = 0; counter < n; counter++) {
        meow();
    }
    return 0;
}