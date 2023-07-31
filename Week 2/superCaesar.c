#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{//Validate user input
    if (argc < 2 || strlen(argv[1]) != 26)
    {
        printf("Please enter a KEY with only alphabetical characters and ensure 26 characters.");
        return 1;
    }
    int arg_length = strlen(argv[1]);
    for (int i = 0; i < arg_length; i++)
    {
        if ((argv[1][i] < 'A' || argv[1][i] > 'Z') && (argv[1][i] < 'a' || argv[1][i] > 'z'))
        {
            printf("Invalid character detected. Please use only letters.");
            return 1;
        }
    }
    //Get and read user input
    char message[26];
    printf("Please enter the message you want to encrypt. (MAX LENGTH: 26)");
    while (fgets(message, sizeof(message), stdin) == NULL || strlen(message) > 27) {
        printf("Please enter a message no longer than 26 characters.");
        while (getchar() != '\n');
    }
    //Begin encryption based on key as given by user
    int length = strlen(message) - 1; //fgets also includes the enter key as part of the string
    for (int i = 0; i < length; i++)
    {
        char currentChar = message[i];
        if (currentChar >= 'A' && currentChar <= 'Z')
        {
            int key = argv[1][i] - 'A';
            message[i]= 'A' + (currentChar - 'A' + key) % 26;
        }
        else if (currentChar >= 'a' && currentChar <= 'z')
        {
            int key = argv[1][i] - 'a';
            message[i] = 'a' + (currentChar - 'a' + key) % 26;
        }
    }
    //Output result
    printf("Message: %s", message);
    return 0;
}