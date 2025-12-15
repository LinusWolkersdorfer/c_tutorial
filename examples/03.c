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
    double result = 0;

    for(int i = 0; i < s->grade_count; i++) {
        result += s->grades[i];
    }

    return result / s->grade_count;
}

int main() {
    double grades_1[3] = {1.3, 4.0, 2.7};
    student_t student1 = make_stutent_t(12345678, 18, grades_1, "John Doe", sizeof(grades_1) / sizeof(grades_1[0]));

    printf("Notendurchschnitt von Student %s (alter %d) mit Matrikelnummer %d: %.1f\n", student1.name, student1.age, student1.matrikelnummer, durchschnitt(&student1));

    return 0;
}