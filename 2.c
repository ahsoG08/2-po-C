#include <stdio.h>
#include <stdlib.h>

typedef struct Student {
    int height;
    struct Student* next;
} Student;

Student* insert_sorted(Student* head, int height) {
    Student* new_student = (Student*)malloc(sizeof(Student));
    new_student->height = height;
    new_student->next = NULL;

    if (head == NULL || height > head->height) {
        new_student->next = head;
        return new_student;
    }

    Student* current = head;
    while (current->next != NULL && current->next->height >= height) {
        current = current->next;
    }

    new_student->next = current->next;
    current->next = new_student;
    return head;
}

void print_list(Student* head) {
    Student* current = head;
    while (current != NULL) {
        printf("%d ", current->height);
        current = current->next;
    }
    printf("\n");
}

void free_list(Student* head) {
    Student* tmp;
    while (head != NULL) {
        tmp = head;
        head = head->next;
        free(tmp);
    }
}

int main() {
    Student* head = NULL;
    int height;
    char input[10];

    printf("Вводите рост учеников (для завершения введите 'end'):\n");

    while (1) {
        scanf("%s", input);
        if (strcmp(input, "end") == 0) {
            break;
        }

        height = atoi(input);
        head = insert_sorted(head, height);
        printf("Текущий порядок: ");
        print_list(head);
    }

    free_list(head);
    return 0;
}
