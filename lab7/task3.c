#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <string.h>
#include <fcntl.h>

void addition(int N) {
    int sum = 0;
    for (int i = 1; i <= N; i++) {
        sum += i;
    }
    printf("Sum of first %d natural numbers: %d\n", N, sum);
}

void product(int M) {
    int prod = 1;
    for (int i = 1; i <= M; i++) {
        prod *= i;
    }
    printf("Product of first %d natural numbers: %d\n", M, prod);
}

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
        fprintf(stderr, "Both -n and -m flags are required.\n");
        exit(EXIT_FAILURE);
    }

    // Fork two child processes
    pid_t pid1 = fork();
    if (pid1 == -1) {
        perror("fork");
        exit(EXIT_FAILURE);
    } else if (pid1 == 0) {
        // Child process for addition
        addition(N);
        exit(EXIT_SUCCESS);
    }

    // Fork the second child process
    pid_t pid2 = fork();
    if (pid2 == -1) {
        perror("fork");
        exit(EXIT_FAILURE);
    } else if (pid2 == 0) {
        // Child process for product
        product(M);
        exit(EXIT_SUCCESS);
    }

    // Wait for both child processes to finish
    int status;
    waitpid(pid1, &status, 0);
    waitpid(pid2, &status, 0);

    return 0;
}

