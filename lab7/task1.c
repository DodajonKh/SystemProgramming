#include <stdio.h>
#include <string.h>

void process_option(const char *option) {
    if (strcmp(option, "-help") == 0) {
        printf("Help message: You need to provide at least 11 arguments.\n");
    };
    } else {
        printf("Unknown option: %s\n", option);
    }
}

int main(int argc, char *argv[]) {
    if (argc != 11) {
        printf("Usage: %s <arg1> <arg2> ... <arg10>\n", argv[0]);
        return 1;
    }

    for (int i = 1; i < argc; i++) {
        if (argv[i][0] == '-') {
            printf("Option: %s\n", argv[i] + 1); // Print option without the '-'
            process_option(argv[i]);
        } else {
            printf("Argument: %s\n", argv[i]);
        }
    }

    return 0;
}

