#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "student.h"


void add_student(StudentNode **head, int id, const char *name) {
    StudentNode *new_student = (StudentNode *)malloc(sizeof(StudentNode));

    if (!new_student) {
        printf("Error: Out of memory\n");
        return;
    }

    new_student->id = id;
    strcpy(new_student->name, name);
    new_student->num_subjects = 0;
    new_student->next = *head;
    *head = new_student;
}

void print_students(StudentNode* head) {
    StudentNode *current = head;

    while (current != NULL) {
        printf("ID: %d, Name: %s\n", current->id, current->name);
        printf("Subjects: ");
        for (int i = 0; i < current->num_subjects; i++) {
            printf("%s ", current->subjects[i]);
        }
        printf("\n");
        current = current->next;
    }
    printf("NULL\n"); // indicate the end of the list
}