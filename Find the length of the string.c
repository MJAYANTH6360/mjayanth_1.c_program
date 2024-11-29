#include <stdio.h>
#include <string.h>
int stringLength(char str[]) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

int main() {
    char str[100];
    int length;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    length = stringLength(str);
    printf("Length of the string (manual counting): %d\n", length);
    printf("Length of the string (using strlen): %lu\n", strlen(str));

    return 0;
}
