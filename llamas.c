#include <stdio.h>

void llama_calculator(float birth_rate, float death_rate)
{
    int years = 0;
    int population;
    int target_population;
    printf("Start Size: ");
    //Invalid input, defined as an integer, returns 0
    while (scanf("%d", &population) != 1 || population <= 9) {
        printf("Please enter a number greater than nine: ");
        //Go through input buffer until new line character is read to prevent infinite loop
        while (getchar() != '\n');
    }
    printf("End Size: ");
    while(scanf("%d", &target_population) != 1 || target_population <= population) {
        printf("Please ensure that the number is greater than the starting population: ");
        while (getchar() != '\n');
    };
    //Calculate years
    while (population < target_population)
    {
        float llamas_born = population * birth_rate;
        float llamas_died = population * death_rate;
        population = population + (llamas_born - llamas_died);
        years++;
    }
    printf("%s%d\n", "Years: ", years);
}

int main(void)
{
    llama_calculator(0.33, 0.25);
    return 0;
}
