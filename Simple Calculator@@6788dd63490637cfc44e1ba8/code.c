#include <stdio.h>

int main() {
    int a, b;
    char ch;

    // Input two integers
    scanf("%d %d", &a, &b);
    
    // Input the operator (ignore whitespace)
    scanf(" %c", &ch);

    // Perform the operation
    if (ch == '+') {
        printf("%d", a + b);
    } else if (ch == '-') {
        printf("%d", a - b);
    } else if (ch == '*') {
        printf("%d", a * b);
    } else if (ch == '/') {
        if (b == 0) {
            printf("error");
            return 1;
        }
        printf("%d", a / b);
    } else {
        printf("error: invalid operator\n");
    }

    return 0;
}
