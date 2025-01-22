#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "include/student.h"
#include "include/teacher.h"

int main() {
    // Initialize empty student and teacher lists
    StudentNode *student_list = NULL;
    TeacherNode *teacher_list = NULL;

    // Add students
    add_student(&student_list, 1, "Alice");
    add_student(&student_list, 2, "Bob");
    add_student(&student_list, 3, "Charlie");
    
    add_teacher(&teacher_list, 1, "Mr Gilbert", "English");
    add_teacher(&teacher_list, 2, "Mr Jones", "Science");
    add_teacher(&teacher_list, 3, "Mrs Smith", "Maths");

    // Print students and teachers
    printf("Students:\n");
    print_students(student_list);

    printf("\n");
    printf("Teachers:\n");
    print_teachers(teacher_list);
    printf("\n");

    StudentNode *student = find_student_by_id(student_list, 1);

    add_subject_to_student(student, "Maths");
    printf("\n");

    print_students(student_list);

    return 0;
}