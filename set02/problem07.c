#include <stdio.h>
#include <string.h>

void input_string(char *a);
void str_reverse(char *str, char *rev_str);
void output(char *a, char *reverse_a);

int main() {
    char input[100];
    char reversed[100];

    input_string(input);
    str_reverse(input, reversed);
    output(input, reversed);

    return 0;
}

void input_string(char *a) {
    printf("Enter a string: ");
    scanf("%s", a);
}

void str_reverse(char *str, char *rev_str) {
    int length = strlen(str);
    int i, j;

    for (i = length - 1, j = 0; i >= 0; i--, j++) {
        rev_str[j] = str[i];
    }
    rev_str[j] = '\0';
}

void output(char *a, char *reverse_a) {
    printf("Original String: %s\n", a);
    printf("Reversed String: %s\n", reverse_a);
}
