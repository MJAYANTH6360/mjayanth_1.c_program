#include <stdio.h>

int main() {
    int num, i;

    // Ask the user for the number for which the multiplication table is to be printed
    printf("Enter a number to print its multiplication table: ");
    scanf("%d", &num);

    // Print the multiplication table for the given number
    printf("\nMultiplication Table for %d:\n", num);

    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}
