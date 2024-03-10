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

// Function to perform bubble sort based on employee ID
void bubbleSort(Employee arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j].id > arr[j + 1].id) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

// Function to get input for an employee record from the user
void getInput(Employee *emp) {
    printf("Enter Employee ID: ");
    scanf("%d", &emp->id);
    printf("Enter Employee Name: ");
    scanf("%s", emp->name);
    printf("Enter Employee Salary: ");
    scanf("%f", &emp->salary);
}

int main() {
    // Declare an array of employee records
    Employee employees[3];

    // Get input for employee records from the user
    for (int i = 0; i < 3; i++) {
        printf("\nEnter details for Employee %d:\n", i + 1);
        getInput(&employees[i]);
    }

    // Perform bubble sort on employee records based on ID
    bubbleSort(employees, 3);

    // Display the sorted employee records
    printf("\nSorted Employee Records:\n");
    printf("ID\tName\tSalary\n");
    for (int i = 0; i < 3; i++) {
        printf("%d\t%s\t%.2f\n", employees[i].id, employees[i].name, employees[i].salary);
    }

    return 0;
}

