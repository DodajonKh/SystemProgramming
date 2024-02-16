#include <stdio.h>
#include "studentinfo.h"

void printStudentInfo(char studentName[], int studentID, struct data subjects[], int length) {
    printf("%s \n", studentName);
    printf("ID: %d\n", studentID);

    for (int i = 0; i < length; ++i) {
        printf("%s: %d\n", subjects[i].subject_name, subjects[i].marks);
    }
}
