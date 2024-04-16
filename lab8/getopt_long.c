#include <stdio.h>
#include <getopt.h>

int main(int argc, char *argv[]) {
    int opt;
    struct option long_options[] = {
        {"help", no_argument, NULL, 'h'},
        {"output", required_argument, NULL, 'o'},
        {NULL, 0, NULL, 0}
    };

    while ((opt = getopt_long(argc, argv, "ho:", long_options, NULL)) != -1) {
        switch (opt) {
            case 'h':
                printf("Usage: %s [options]\n", argv[0]);
                printf("Options:\n");
                printf("  -h, --help\t\tDisplay this help message\n");
                printf("  -o, --output FILE\tSpecify output file\n");
                return 0;
            case 'o':
                printf("Output file: %s\n", optarg);
                break;
            default:
                printf("Unknown option\n");
                return 1;
        }
    }
    return 0;
}

