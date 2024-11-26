#include <stdio.h>

int main() {
    for (int i = 1; i <= 10; i++) {
        if (i == 5) {
            continue;  // Skip the rest of the loop body when i is 5
        }
        printf("%d\n", i);  // This will not execute when i is 5
    }

    return 0;  // Exit the program
}
