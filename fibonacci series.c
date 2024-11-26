#include <stdio.h>

int main() {
    int n, first = 0, second = 1, next;

    // Ask the user for the number of terms in the Fibonacci series
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    // Handle cases where n is less than or equal to 0
    if (n <= 0) {
        printf("Please enter a positive integer greater than 0.\n");
    }
    else if (n == 1) {
        printf("Fibonacci Series: %d\n", first);
    }
    else {
        printf("Fibonacci Series: \n");
        printf("%d, %d", first, second);  // Print the first two terms

        // Generate and print the next terms in the Fibonacci series
        for (int i = 3; i <= n; i++) {
            next = first + second;  // Next term is the sum of the previous two
            printf(", %d", next);

            // Update first and second for the next iteration
            first = second;
            second = next;
        }
        printf("\n");
    }

    return 0;  // Exit the program
}
