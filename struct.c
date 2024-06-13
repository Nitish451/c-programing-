#include <stdio.h>

struct Employee {
    int emp_id;
    char name[50];
    float salary;
};

int main() {
    struct Employee employees[3];
    int i, highest_salary_index = 0;

    // Input data for three employees 
    for (i = 0; i < 3; i++) {
        printf("Enter details for employee %d:\n", i+1 );
        printf("Employee ID: ");
        scanf("%d", &employees[i].emp_id);
        printf("Name: ");
        scanf("%s", employees[i].name);
        printf("Salary: ");
        scanf("%f", &employees[i].salary);
    }

    // Find the employee with the highest salary
    for (i = 1; i < 3; i++) {
        if (employees[i].salary > employees[highest_salary_index].salary) {
            highest_salary_index = i;
        }
    }

    // Display the information of the highest-salary employee
    printf("\nEmployee with the highest salary:\n");
    printf("Employee ID: %d\n", employees[highest_salary_index].emp_id);
    printf("Name: %s\n", employees[highest_salary_index].name);
    printf("Salary: %.2f\n", employees[highest_salary_index].salary);

    return 0;
}
