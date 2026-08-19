#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <errno.h>

#define BUFFER_SIZE 100

int main(void)
{
    int fd = open("read_showcase.c", O_RDONLY);
    if (fd == -1) {
        perror("Error opening file");
        return (1);
    }
    printf("fd returned by open is: %d\n", fd);

    // A1. Creating fixed-size buffer on stack - PROBLEM: STACK OVERFLOW
    // char buffer[BUFFER_SIZE + 1] = {0}; // Initialize buffer with null terminators

    // A2. Malloc a pointer address to a buffer on heap
    char *buffer = malloc(BUFFER_SIZE + 1 * sizeof(char));
    if (!buffer) {
        perror("Error allocating memory");
        close(fd);
        return (1);
    }

    // B. Read loop
    while (1) {
        ssize_t bytes_read = read(fd, buffer, BUFFER_SIZE);
        if (bytes_read == -1) {
            perror("Error reading file");
            free(buffer);
            close(fd);
            return (1);
        }
        if (bytes_read == 0) {
            // End of file reached
            break;
        }
        buffer[bytes_read] = '\0'; // Null-terminate the string
        printf("Read %zd bytes:\n%s\n", bytes_read, buffer);
    }

    // C. Validation and cleanup
    free(buffer);
    close(fd);
    return (0);
}
