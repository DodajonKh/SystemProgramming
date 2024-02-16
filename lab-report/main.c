#include <stdio.h>
#include "studentinfo.h"

int main() {
    char StudentName[30] = "Dodajon Xusnitdinov";
    int id = 210011;

    struct data subjects[] = {
        {"Digital Image Processing", 59},
        {"Machine Learning", 42}
    };

    int length = sizeof(subjects) / sizeof(subjects[0]);

    // Call the function from the library
    printStudentInfo(StudentName, id, subjects, length);

    return 0;
}
