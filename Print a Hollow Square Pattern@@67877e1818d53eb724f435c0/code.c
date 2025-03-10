// Your code here...
#include <stdio.h>

int main() {
    int N;

    // Taking input
    // printf("Enter the size of the square: ");
    scanf("%d", &N);

    // Loop to print the hollow square
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            // Print '*' at the borders, otherwise print space
            if (i == 1 || i == N || j == 1 || j == N)
                printf("* ");
            else
                printf(" ");
        }
        printf("\n"); // Move to the next line
    }

    return 0;
}
