#include <stdio.h>

void swap(int *a, int *b);

int main(void) {
    int x = 1;
    int y = 2;

    printf("x is %i, and y is %i", x, y);
    swap(&x, &y);
    printf("x is %i, and y is %i", x, y);
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}