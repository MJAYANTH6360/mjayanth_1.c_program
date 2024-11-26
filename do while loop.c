#include <stdio.h>

int main() {
    int count = 1;  // Initialize the counter variable

    do {
        printf("%d\n", count);  // Print the current value of count
        count++;  // Increment the counter
    } while (count <= 5);  // Condition to check after each iteration

    return 0;  // Exit the program
}
