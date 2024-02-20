#include <stdio.h>
#include <stdio.h>

int main() {
    float fahrenheit, celsius;
    int start, end, increment;

    // Accepting input from the user
    printf("Enter the starting value (in Fahrenheit): ");
    scanf("%d", &start);
    printf("Enter the ending value (in Fahrenheit): ");
    scanf("%d", &end);
    printf("Enter the increment value: ");
    scanf("%d", &increment);

    // Adding heading line
    printf("\nFahrenheit\tCelsius\n");
    printf("-----------------------\n");

    for (fahrenheit = start; fahrenheit <= end; fahrenheit += increment) {
        celsius = (fahrenheit - 32) * 5 / 9;
        printf("%8.2f\t%6.2f\n", fahrenheit, celsius);
    }

    return 0;
}

