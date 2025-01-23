#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "cli.h"

void display_menu() {
    printf("\n--- School Management System ---\n");
    printf("1. Add Student\n");
    printf("2. Add Teacher\n");
    printf("3. Print Students\n");
    printf("4. Print Teachers\n");
    printf("5. Add Subject to Student\n");
    printf("6. Find Students by Subject\n");
    printf("7. Exit\n");
    printf("--------------------------------\n");
    printf("Enter your choice: ");
}

