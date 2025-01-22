#ifndef _STUDENT_H_
#define _STUDENT_H_

typedef struct StudentNode { 
    int id; 
    char name[50]; 
    char subjects[10][50]; // Fixed-size array for subject names 
    int num_subjects; // Number of subjects the student is enrolled in
    struct StudentNode *next; // Next student 
} StudentNode;


void add_student(StudentNode **head, int id, const char *name); 
void add_subject_to_student(StudentNode *student, const char *subject_name); 
void print_students(StudentNode *head);
void student_by_subject(StudentNode *head, char *subject_name);



#endif // _STUDENT_H_
