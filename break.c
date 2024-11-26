#include <stdio.h>

int main() {
    int count = 1;  // Initialize counter variable

    while (count <= 10) {
        if (count == 6) {
            printf("Breaking the loop at count = %d\n", count);
            break;  // Exit the loop when count reaches 6
        }
        printf("Count = %d\n", count);
        count++;  // Increment the counter
    }

    printf("Loop exited.\n");

    return 0;  // Exit the program
}
