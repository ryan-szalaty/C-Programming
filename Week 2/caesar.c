#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc < 3)
    {
        printf("Please enter KEY and MESSAGE. Separate them with a single space.");
        return 1;
    }
    int key = atoi(argv[1]);
    int length = strlen(argv[2]);
    for (int i = 0; i < length; i++)
    {
        if (argv[2][i] >= 'A' && argv[2][i] <= 'Z')
        {
            argv[2][i] = 'A' + (argv[2][i] - 'A' + key) % 26;
        }
        else if (argv[2][i] >= 'a' && argv[2][i] <= 'z')
        {
            argv[2][i] = 'a' + (argv[2][i] - 'a' + key) % 26;
        }
    }
    printf("%s", argv[2]);
    return 0;
}

// V1 complete. V2 might require two separate for loops: one for the key, one for the message

int superCypher(int argc, char *argv[])
{
    if (argc < 2 || strlen(argv[1]) != 26)
    {
        printf("Please enter a KEY with only alphabetical characters");
        return 1;
    }
    int length = strlen(argv[1]);
    for (int i = 0; i < length; i++)
    {
        if ((argv[1][i] < 'A' || argv[1][i] > 'Z') && (argv[1][i] < 'a' || argv[1][i] > 'z'))
        {
            printf("Invalid character detected. Please use only letters.");
            return 1;
        }
    }
    char message[27];
    printf("Please enter the message you want to encrypt. (MAX LENGTH: 26)");
    while (fgets(message, sizeof(message), stdin) == NULL || strlen(message > 27)) {
        printf("Please enter a message no longer than 26 characters.");
        while (getchar() != '\n');
    }
    
    //Input has been verified. Next step is to return plaintext as encrypted text.
    return 0;
}