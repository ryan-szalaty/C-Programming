#include <stdio.h>

int main (void) {
    //Define numbers and calculator operation
    float num;
    float num2;
    char operation;

    //Ask for user input and store in local variables
    printf("Please input +, -, * or /:\n");
    scanf("%c", &operation);
    printf("Input an number:\n");
    scanf("%f", &num);
    printf("Input your second number:\n");
    scanf("%f", &num2);

    //Perform calculations
    switch(operation) {
        case '+':
            printf("%f", num + num2);
            break;
        case '-':
            printf("%f", num - num2);
            break;
        case '*':
            printf("%f", num * num2);
            break;
        case '/':
            if (num2 == 0) {
                printf("ERROR: DIVIDE BY ZERO\n");
                break;
            }
            else {
                printf("%f", num / num2);
                break;
            }
    }
    return 0;
}

