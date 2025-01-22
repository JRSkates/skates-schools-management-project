#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "include/student.h"
#include "include/teacher.h"
#include "include/cli.h"

int main() {
    StudentNode *student_list = NULL;
    TeacherNode *teacher_list = NULL;

    int user_choice;
    int running = 1;

    while (running) {
        display_menu();
        scanf("%d", &user_choice);

        switch (user_choice) {
            case 1:
                // Add student
                
                break;
            case 2:

                break;
            case 3:
                
                break;
            case 4:

                break;
            case 5:
                printf("Goodbye!\n");
                running = 0;
                break;
            default:
                printf("Invalid choice. Please try again.\n");

        }
    }

    // // Initialize empty student and teacher lists
    // StudentNode *student_list = NULL;
    // TeacherNode *teacher_list = NULL;

    // // Add students
    // add_student(&student_list, 1, "Alice");
    // add_student(&student_list, 2, "Bob");
    // add_student(&student_list, 3, "Charlie");
    
    // add_teacher(&teacher_list, 1, "Mr Gilbert", "English");
    // add_teacher(&teacher_list, 2, "Mr Jones", "Science");
    // add_teacher(&teacher_list, 3, "Mrs Smith", "Maths");

    // // Print students and teachers
    // print_students(student_list);
    // print_teachers(teacher_list);

    // StudentNode *student = find_student_by_id(student_list, 1);

    // add_subject_to_student(student, "Maths");
    // printf("\n");

    // StudentNode *student2 = find_student_by_name(student_list, "Bob");

    // add_subject_to_student(student2, "Science");
    // printf("\n");

    // print_students(student_list);

    return 0;
}