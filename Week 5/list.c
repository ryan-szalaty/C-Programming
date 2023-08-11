#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    /*
    int list[] = {1, 2, 3};
    int length = sizeof(list) / sizeof(list[0]);
    for (int i = 0; i < length; i++) {
        printf("%i", list[i]);
    }
    */
    int *list = malloc(3 * sizeof(int));
    if (list == NULL)
    {
        perror("No list found. Returning...");
        free(list);
        return 1;
    }

    list[0] = 1;
    list[1] = 2;
    list[2] = 3;

    //Need an array of 4

    //int *temp = malloc(4 * sizeof(int)); Possible, but not as efficient
    int *temp = realloc(list, 4 * sizeof(int)); //Using realloc automatically frees old memory
    if (temp == NULL)
    {
        perror("No list found. Returning...");
        free(list);
        return 1;
    }
    temp[3] = 4;
    list = temp;
    for (int i = 0; i < 4; i++) {
        printf("%i", list[i]);
    }
    
    free(list);
}
