#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "teacher.h"

void add_teacher(TeacherNode **head, int id, const char *name, const char *subject) {
    TeacherNode *new_teacher = (TeacherNode *)malloc(sizeof(TeacherNode));

    new_teacher->id = id;
    strcpy(new_teacher->name, name);
    strcpy(new_teacher->subject, subject);
    new_teacher->next = NULL;

    if (!new_teacher) {
        printf("Error: Out of memory\n");
        return;
    }

    
    if(*head == NULL) {
        *head = new_teacher;
        return;
    }

    TeacherNode *last = *head;
    while (last->next!= NULL) {
        last = last->next;
    }

    last->next = new_teacher;
}
