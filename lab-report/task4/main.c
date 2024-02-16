#include <stdio.h>
#include "matrixoperations.c"

int main(){
double Mat_A[3][3], Mat_B[3][3], Mat_C[3][3];

    // Get data for Mat_A and Mat_B
    printf("Enter data for Mat_A:\n");
    Example_Get(Mat_A);

    printf("Enter data for Mat_B:\n");
    Example_Get(Mat_B);

    // Display Mat_A and Mat_B
    printf("\nMat_A:\n");
    Example_Show(Mat_A);

    printf("\nMat_B:\n");
    Example_Show(Mat_B);

    // Add Mat_A and Mat_B, store result in Mat_C
    Example_Add(Mat_A, Mat_B, Mat_C);
    printf("\nMat_C (Addition):\n");
    Example_Show(Mat_C);

    // Multiply Mat_A and Mat_B, store result in Mat_C
    Example_Mul(Mat_A, Mat_B, Mat_C);
    printf("\nMat_C (Multiplication):\n");
    Example_Show(Mat_C);

    // Calculate the modulus of Mat_A
    double modulus = Example_Mod(Mat_A);
    printf("\nModulus of Mat_A: %.2lf\n", modulus);

    // Calculate the inverse of Mat_A and store in Mat_B
    Example_Inv(Mat_A, Mat_B);
    printf("\nMat_B (Inverse of Mat_A):\n");
    Example_Show(Mat_B);

return 0;

};
