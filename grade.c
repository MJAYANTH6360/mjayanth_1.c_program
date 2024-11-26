#include <stdio.h>

int main() {
    float marks;
    
    // Taking input from the user
    printf("Enter the marks: ");
    scanf("%f", &marks);
    
    // Determining the grade based on the marks
    if (marks >= 90) {
        printf("Grade: A\n");
    } else if (marks >= 80) {
        printf("Grade: B\n");
    } else if (marks >= 70) {
        printf("Grade: C\n");
    } else if (marks >= 60) {
        printf("Grade: D\n");
    } else if (marks >= 50)
