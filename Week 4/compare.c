#include <stdio.h>

int main(void) {
    int i, j;
    printf("Enter an integer value: ");
    scanf("%i", &i);
    printf("Enter a second integer value: ");
    scanf("%i", &j);

    if (i == j) {
        printf("%s", "Same.");
    } else {
        printf("%s", "Different.");
    }
    printf("%c", '\n');
    printf("%s", "Now here's where they are in memory:\n");
    printf("i is at memory location %p\n", &i);
    printf("j is at memory location %p\n", &j);
}