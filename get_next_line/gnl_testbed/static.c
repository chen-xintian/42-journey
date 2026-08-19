#include <stdio.h>

void incrementer(void)
{
    static int counter = 0;
    // Static variable retains value across function calls
    // Note: assignment is optional, defaults to 0 if not explicitly initialized
    // NULL for pointers, 0 for integers, 0.0 for floating-point types, etc.
    printf("%d\n", counter);
    counter++;
    return ;
}

int main(void)
{
    while (1) {
        incrementer();
    }
    return 0;
}