#include <stdio.h>

struct data{
    char subject_name[50];
    int marks;
};

int main()
{
    char StudentName[30] = "Dodajon Xusnitdinov";
    int id = 210011;
    
    struct data subjects[] = {
        {"Digital Image Processing", 59},
        {"Machine Learning", 42}
    };
    
    int length = sizeof(subjects)/sizeof(subjects[0]);
    
    printf("%s \n", StudentName);
    
    printf("id: %d\n", id);
    
    for(int i = 0; i<length; ++i){
        printf("%s: %d\n", subjects[i].subject_name, subjects[i].marks);
    };
    
    return 0;
};

