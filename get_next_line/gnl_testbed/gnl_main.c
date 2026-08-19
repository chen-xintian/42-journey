#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <errno.h>

#define BUFFER_SIZE 10000000

char *get_next_line(int fd);

int main(void) {
    // File opening phase
    int fd = open("test.txt", O_RDONLY); // insert path to test file here (same directory as this file)
    if (fd == -1) {
        perror("Error opening file");
        return (1);
    }
    printf("fd returned by open is: %d\n", fd);

    // Buffer malloc creation
    char *buffer;
    buffer = malloc((BUFFER_SIZE + 1) * sizeof(char));
    if (!buffer) {
        perror("Error allocating memory");
        close(fd);
        return (1);
    }

    // Line extraction phase
    int line_counter = 1;
    while (1) {
        buffer = get_next_line(fd);
        if (buffer == NULL) {
            // End of file reached or error occurred
            break;
        }
        printf("Line extracted (#%d):\n%s", line_counter, buffer);
        line_counter++;
        free(buffer);
    }

    // Cleanup phase
    close(fd);
    return (0);
}