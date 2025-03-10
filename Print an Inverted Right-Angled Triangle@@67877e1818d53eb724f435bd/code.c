#include <stdio.h>

int main() {
    int N;

    // Taking input
    // printf("Enter the number of rows: ");
    scanf("%d", &N);

    // Loop to print the inverted right-angled triangle
    for (int i = N; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
