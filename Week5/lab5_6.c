#include <stdio.h>

#define NUM_EMPLOYEES 4

struct Employee {
    int id;
    int salary;
};

void find_min_max_salary(struct Employee emps[], int size, int *max, int *min);

int main() {
    struct Employee staff_data[NUM_EMPLOYEES];
    int top_salary;
    int low_salary;
    int k;

    printf("Enter data for %d employees:\n", NUM_EMPLOYEES);
    for (k = 0; k < NUM_EMPLOYEES; k++) {
        printf("--- Employee %d ---\n", k + 1);
        printf("Enter ID: ");
        scanf("%d", &staff_data[k].id);
        printf("Enter Salary: ");
        scanf("%d", &staff_data[k].salary);
    }

    find_min_max_salary(staff_data, NUM_EMPLOYEES, &top_salary, &low_salary);

    printf("\n--- EMPLOYEE SALARY SUMMARY ---\n");
    printf("ID     | Salary\n");
    printf("-------|---------\n");
    for (k = 0; k < NUM_EMPLOYEES; k++) {
        printf("%-6d | %d\n", staff_data[k].id, staff_data[k].salary);
    }
    printf("\nMaximum Salary Found: %d\n", top_salary);
    printf("Minimum Salary Found: %d\n", low_salary);

    return 0;
}

void find_min_max_salary(struct Employee emps[], int size, int *max, int *min) {
    int i;
    *max = emps[0].salary;
    *min = emps[0].salary;

    for (i = 1; i < size; i++) {
        if (emps[i].salary > *max) *max = emps[i].salary;
        if (emps[i].salary < *min) *min = emps[i].salary;
    }
}
