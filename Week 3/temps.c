#include <stdio.h>
#include <string.h>

#define NUM_CITIES 10

typedef struct City
{
    char name[20];
    int temp;
}
City;

City cities[NUM_CITIES];

void sort_cities(void);

int main(void)
{
    strcpy(cities[0].name, "Austin");
    cities[0].temp = 97;

    strcpy(cities[1].name, "Boston");
    cities[1].temp = 82;

    strcpy(cities[2].name, "Chicago");
    cities[2].temp = 85;

    strcpy(cities[3].name, "Denver");
    cities[3].temp = 90;

    strcpy(cities[4].name, "Las Vegas");
    cities[4].temp = 105;

    strcpy(cities[5].name, "Los Angeles");
    cities[5].temp = 82;

    strcpy(cities[6].name, "Miami");
    cities[6].temp = 97;

    strcpy(cities[7].name, "New York");
    cities[7].temp = 85;

    strcpy(cities[8].name, "Phoenix");
    cities[8].temp = 107;

    strcpy(cities[9].name, "San Francisco");
    cities[9].temp = 66;

    sort_cities();

    printf("\nAverage July Temperatures by City\n\n");

    for (int i = 0; i < NUM_CITIES; i++)
    {
        printf("%s: %i\n", cities[i].name, cities[i].temp);
    }
}

// TODO: Sort cities by temperature in descending order
void sort_cities(void)
{
    for (int i = 0; i < NUM_CITIES; i++) {
            int hottest = i;
        for (int j = i + 1; j < NUM_CITIES - 1; j++) {
            if (cities[j].temp > cities[hottest].temp) {
                hottest = j;
            }
        }
        City city = cities[i];
        cities[i] = cities[hottest];
        cities[hottest] = city;
    }
}
