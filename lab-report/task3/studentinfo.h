#ifndef STUDENTINFO_H
#define STUDENTINFO_H

struct data {
    char subject_name[50];
    int marks;
};

void printStudentInfo(char studentName[], int studentID, struct data subjects[], int length);

#endif
