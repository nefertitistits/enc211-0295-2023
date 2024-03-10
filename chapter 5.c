#include <stdio.h>
#include <stdlib.h>

// Define a structure for the record
typedef struct {
    int id;
    char name[50];
    float salary;
} Employee;

// Function to swap two employee records
void swap(Employee *a, Employee *b) {
    Employee temp = *a;
    *a = *b;
    *b = temp;
}

// Function to perform sorting based on employee ID
void sortEmployeesById(Employee arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j].id > arr[j + 1].id) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

int main() {
    // Demonstrate typecasting and precedence
    int a = 10;
    float b = 3.5;
    float result = (float)a / b; // Typecasting int to float
    printf("Result: %f\n", result);

    // Create an array of employee records
    Employee employees[3] = {
        {102, "John", 2500.50},
        {101, "Alice", 3200.75},
        {103, "Bob", 1800.25}
    };

    // Sort the array of employees based on employee ID
    sortEmployeesById(employees, 3);

    // Display the sorted employee records
    printf("\nSorted Employee Records:\n");
    printf("ID\tName\tSalary\n");
    for (int i = 0; i < 3; i++) {
        printf("%d\t%s\t%.2f\n", employees[i].id, employees[i].name, employees[i].salary);
    }

    return 0;
}
