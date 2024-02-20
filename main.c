#include <stdio.h>
#include <stdio.h>

int main() {
    float pounds, kilograms;
    int start, end, increment;

    // Accepting input from the user
    printf("Enter the starting value (in pounds): ");
    scanf("%d", &start);
    printf("Enter the ending value (in pounds): ");
    scanf("%d", &end);
    printf("Enter the increment value: ");
    scanf("%d", &increment);

    // Adding heading line
    printf("\nPounds\tKilograms\n");
    printf("-----------------------\n");

    for (pounds = start; pounds <= end; pounds += increment) {
        kilograms = pounds * 0.453592; // 1 pound is approximately 0.453592 kilograms
        printf("%6.2f\t%6.2f\n", pounds, kilograms);
    }

    return 0;
}

