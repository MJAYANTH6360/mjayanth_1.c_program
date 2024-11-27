#include <stdio.h>

int main() {
    int n, i;

    // Ask the user for the size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Declare an array of size n
    int arr[n];

    // Ask the user to input the elements of the array
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Assume the first element is the largest
    int largest = arr[0];

    // Loop through the array to find the largest element
    for (i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];  // Update largest if we find a larger element
        }
    }

    // Output the largest element
    printf("The largest element in the array is: %d\n", largest);

    return 0;
}
