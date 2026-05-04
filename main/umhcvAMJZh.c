#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LEN 100
void reverse(char *str) {
    int n = strlen(str);
    for (int i = 0; i < n / 2; i++) {
        char temp = str[i];
        str[i] = str[n - i - 1];
        str[n - i - 1] = temp;
    }
}
void to_uppercase(char *str) {
    for (int i = 0; str[i]; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] -= 32;
        }
    }
}
void process_string(char *str) {
    reverse(str);
    to_uppercase(str);
}
int main() {
    char str[MAX_LEN];
    printf("Enter a string: ");
    fgets(str, MAX_LEN, stdin);
    str[strcspn(str, "\n")] = 0;
    process_string(str);
    printf("Processed string: %s\n", str);
    return 0;
}
