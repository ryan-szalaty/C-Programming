#include <stdio.h>

int main (void) {
    int num;
    int num2;

    printf("Input an integer:\n");
    scanf("%d", &num);
    printf("Input your second integer:\n");
    scanf("%d", &num2);

    printf("%d\n", num + num2);
}

