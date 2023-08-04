#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int convert(char input[], int index);

int main(void)
{
    char input[100]; 
    printf("Enter a positive integer: ");
    scanf("%s", input);

    for (int i = 0, n = strlen(input); i < n; i++)
    {
        if (!isdigit(input[i]))
        {
            printf("Invalid Input!\n");
            return 1;
        }
    }
    printf("%i\n", convert(input, strlen(input) - 1));
}

int convert(char input[100], int index)
{
    if (index < 0) {
        return 0;
    }
    int lastChar = input[index];
    int lastDigit = lastChar - '0';

    int remaining_value = convert(input, index - 1);

    //remaining_value(1234)
    //remaining_value(123)
    //remaining_value(12)
    //remaining_value(1)

    //1 * 10 + 2 = 12
    //12 * 10 + 3 = 123
    //123 * 10 + 4 = 1234
    //1234 * 10 + 5 = 12345

    int result = remaining_value * 10 + lastDigit;

    return result;

}