#include <stdio.h>

int main(void) {
    int n = 50;
    int *p = &n; //store memory address where value is stored;
    printf("%p\n", p);
    printf("%i\n", *p);
}