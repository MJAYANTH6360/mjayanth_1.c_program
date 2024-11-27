#include <stdio.h>

int main() {
    int n, sum = 0;

    // Input the number of elements in the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Declare an array of size 'n'
    int arr[n];

    // Input the array elements
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Calculate the sum of the array elements
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    // Output the sum
    printf("The sum of the array elements is: %d\n", sum);

    return 0;
}
