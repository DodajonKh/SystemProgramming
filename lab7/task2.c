#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[]) {
    int opt;
    int n_flag = 0, m_flag = 0;
    int N = 0, M = 0;

    // Parse command line options using getopt
    while ((opt = getopt(argc, argv, "n:m:")) != -1) {
        switch (opt) {
            case 'n':
                n_flag = 1;
                N = atoi(optarg);
                break;
            case 'm':
                m_flag = 1;
                M = atoi(optarg);
                break;
            default: /* '?' */
                fprintf(stderr, "Usage: %s -n <N> -m <M>\n", argv[0]);
                exit(EXIT_FAILURE);
        }
    }

    // Check if both -n and -m flags are provided
    if (!n_flag || !m_flag) {
        fprintf(stderr, "Both flags -n and -m are required.\n");
        exit(EXIT_FAILURE);
    }

    // Calculate the sum of the first N natural numbers
    int sum = 0;
    for (int i = 1; i <= N; i++) {
        sum += i;
    }

    // Calculate the product of the first M natural numbers
    int product = 1;
    for (int i = 1; i <= M; i++) {
        product *= i;
    }

    // Print the sum and product
    printf("Sum of the first %d natural numbers: %d\n", N, sum);
    printf("Product of the first %d natural numbers: %d\n", M, product);

    return 0;
}
