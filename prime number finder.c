#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

// Function to find primes in the given range and save them to a file
void findPrimesInRange(int start, int end, const char *filename) {
    FILE *file = fopen(filename, "w");  // Open the file for writing

    if (file == NULL) {
        printf("Error opening file!\n");
        return;
    }

    // Loop through the given range and check for primes
    for (int i = start; i <= end; i++) {
        if (isPrime(i)) {
            fprintf(file, "%d\n", i);  // Write the prime number to the file
        }
    }

    fclose(file);  // Close the file
    printf("Prime numbers have been saved to '%s'.\n", filename);
}

int main() {
    int start, end;

    // Get the range from the user
    printf("Enter the start of the range: ");
    scanf("%d", &start);
    printf("Enter the end of the range: ");
    scanf("%d", &end);

    // Check if the range is valid
    if (start > end) {
        printf("Invalid range! Start should be less than or equal to end.\n");
        return 1;
    }

    // Call the function to find primes and save them to a file
    findPrimesInRange(start, end, "primes.txt");

    return 0;
}
