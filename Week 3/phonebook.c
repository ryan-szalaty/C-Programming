#include <stdio.h>
#include <string.h>

typedef struct Person
{
    char *name;
    char *number;
} Person;


int main(void)
{
    Person people[2];

    people[0].name = "Duke Nukem";
    people[0].number = "+1 860-777-9999";

    people[1].name = "Mother Reverend";
    people[1].number = "+1 860-555-8888";

    char name[50];
    printf("Please input a name you would like to look up: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0'; //Change the new-line character into a null character;

    for (int i = 0; i < 2; i++) {
        if (strcmp(people[i].name, name) == 0) {
            printf("Name: %s, Number: %s", people[i].name, people[i].number);
            return 0;
        }
    }
    printf("Name not found.");
    return 1;
}