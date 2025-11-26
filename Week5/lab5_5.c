#include <stdio.h>

#define NUM_STUDENTS 4

struct Student {
    int id;
};

int check_id_existence(struct Student students[], int size, int search_id);

int main() {
    struct Student id_list[NUM_STUDENTS];
    int target_id;
    int status;
    int n;

    printf("Enter IDs for %d students:\n", NUM_STUDENTS);
    for (n = 0; n < NUM_STUDENTS; n++) {
        printf("Student %d ID: ", n + 1);
        scanf("%d", &id_list[n].id);
    }

    printf("\nEnter ID to search: ");
    scanf("%d", &target_id);

    status = check_id_existence(id_list, NUM_STUDENTS, target_id);

    printf("\n--- ID SEARCH REPORT ---\n");
    printf("Recorded IDs: ");
    for (n = 0; n < NUM_STUDENTS; n++) {
        printf("%d ", id_list[n].id);
    }
    printf("\n");
    printf("Search ID: %d\n", target_id);

    if (status == 1) {
        printf("ID FOUND in the system.\n");
    } else {
        printf("ID NOT FOUND in the system.\n");
    }

    return 0;
}

int check_id_existence(struct Student students[], int size, int search_id) {
    int i;
    for (i = 0; i < size; i++) {
        if (students[i].id == search_id) {
            return 1;
        }
    }
    return 0;
}
