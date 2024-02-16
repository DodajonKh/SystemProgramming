#include <stdio.h>
#include <math.h>
#include "matrixoperations.h"

void Example_Get(double Mat[][3]) {
    printf("Enter the elements of the 3x3 matrix:\n");
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            scanf("%lf", &Mat[i][j]);
        }
    }
}

void Example_Show(double Mat[][3]) {
    printf("Matrix:\n");
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            printf("%.2lf\t", Mat[i][j]);
        }
        printf("\n");
    }
}

void Example_Add(double Mat_A[][3], double Mat_B[][3], double Mat_C[][3]) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            Mat_C[i][j] = Mat_A[i][j] + Mat_B[i][j];
        }
    }
}

void Example_Mul(double Mat_A[][3], double Mat_B[][3], double Mat_C[][3]) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            Mat_C[i][j] = 0;
            for (int k = 0; k < 3; ++k) {
                Mat_C[i][j] += Mat_A[i][k] * Mat_B[k][j];
            }
        }
    }
}

double Example_Mod(double Mat_A[][3]){
double det = 0;
    for (int i = 0; i < 3; ++i) {
        det += Mat_A[0][i] * (Mat_A[1][(i + 1) % 3] * Mat_A[2][(i + 2) % 3] - Mat_A[1][(i + 2) % 3] * Mat_A[2][(i + 1) % 3]);
    }


	return det;
};


void Example_Inv(double Mat_A[][3], double Mat_B[][3]) {
    double det = Example_Mod(Mat_A);

     if (det == 0) {
        printf("Inverse does not exist (Determinant is zero).\n");
        return;
    };

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            // Calculate the cofactor
            double cofactor = Mat_A[(j + 1) % 3][(i + 1) % 3] * Mat_A[(j + 2) % 3][(i + 2) % 3] -
                              Mat_A[(j + 2) % 3][(i + 1) % 3] * Mat_A[(j + 1) % 3][(i + 2) % 3];

            // Apply the sign based on position
            double sign = (i + j) % 2 == 0 ? 1 : -1;

            // Calculate the adjugate
            Mat_B[i][j] = sign * cofactor / det;
        };
    };
};
