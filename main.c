#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "include/student.h"
#include "include/teacher.h"

int main() {
    // Initialize empty student and teacher lists
    StudentNode *student_list = NULL;
    // TeacherNode *teacher_list = NULL;

    // Add students
    add_student(&student_list, 1, "Alice");
    add_student(&student_list, 2, "Bob");
    add_student(&student_list, 3, "Charlie");


    // Print students and teachers
    printf("Students:\n");
    print_students(student_list);

    StudentNode *student = find_student_by_id(student_list, 1);

    add_subject_to_student(student, "Maths");

    print_students(student_list);

    return 0;
}