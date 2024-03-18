//header files
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h> //various data types
#include <sys/stat.h> //permission for user, group, other
#define BUFFER_SIZE 4096
int main(int argc, char *argv[]) {
if (argc != 3) {
fprintf(stderr, "Usage: %s <source_file> <destination_file>\n", argv[0]);
exit(EXIT_FAILURE);
}
// Open source file
int source_fd = open(argv[1], O_RDONLY);
if (source_fd == -1) {
perror("Error opening source file");
exit(EXIT_FAILURE);
}
// Open destination file (creating it if it doesn't exist)
int dest_fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR
| S_IRGRP | S_IROTH);
if (dest_fd == -1) {
perror("Error opening destination file");
close(source_fd);
exit(EXIT_FAILURE);
}
// Copy data from source file to destination file
char buffer[BUFFER_SIZE];
ssize_t bytes_read, bytes_written;
while ((bytes_read = read(source_fd, buffer, BUFFER_SIZE)) > 0) {
bytes_written = write(dest_fd, buffer, bytes_read);
if (bytes_written != bytes_read) {
perror("Error writing to destination file");close(source_fd);
close(dest_fd);
exit(EXIT_FAILURE);
}
}
if (bytes_read == -1) {
perror("Error reading from source file");
close(source_fd);
close(dest_fd);
exit(EXIT_FAILURE);
}
// Close files
if (close(source_fd) == -1) {
perror("Error closing source file");
exit(EXIT_FAILURE);
}
if (close(dest_fd) == -1) {
perror("Error closing destination file");
exit(EXIT_FAILURE);
}
printf("File copied successfully.\n");
return 0;
}
