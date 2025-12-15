#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// TODO: implement durchschnitt and some example int the main

typedef struct student {
    int matrikelnummer;
    int age;
    double *grades;
    unsigned int grade_count;
    char *name;
} student_t;

student_t make_stutent_t(int m, int a, double *g, char *n, unsigned int gc) {
    student_t student = {
        .age = a,
        .matrikelnummer = m,
        .grades = g,
        .name = n,
        .grade_count = gc
    };

    return student;    
}

double durchschnitt(student_t *s) {
    return 0.0;
}

int main() {
    
    return 0;
}