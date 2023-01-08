#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 100

void reverse_string(char *str, int length);

int main(void) {
    char str[MAX_LENGTH];
    printf("Enter a string: ");

    scanf("%s",str);

    int length = strlen(str);
    reverse_string(str, length);

    printf("Reversed string: %s\n", str);

    return 0;
}

void reverse_string(char *str, int length) {
    char *start = str;
    char *end = str + length - 1;

    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}
