#include <stdio.h>

int main() {
    int N;

    // Taking input
    // printf("Enter the number of rows: ");
    scanf("%d", &N);

    // Loop for rows
    for (int i = 1; i <= N; i++) {
        // Print spaces
        for (int j = 1; j <= N - i; j++) {
            printf(" ");
        }
        // Print stars
        for (int k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }
        printf("\n"); // Move to the next line
    }

    return 0;
}
