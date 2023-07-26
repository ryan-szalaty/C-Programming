#include <stdio.h>

int main() {
    char name[5] = "Ryan";
    int age = 29;
    printf("Hello, asshole!\n");
    printf("Your name is %s, and you are %d!\n", name, age);

    char userInput[10];
    printf("Tell me your name!\n");
    fgets(userInput, sizeof(userInput), stdin);
    printf("Hello, %s!\n", userInput);
    return 0;
}

