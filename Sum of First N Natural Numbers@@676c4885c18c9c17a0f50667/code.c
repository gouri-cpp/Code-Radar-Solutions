#include <stdio.h>

int main() {
    int N, sum = 0;

    // Taking input
    // printf("Enter a number: ");
    scanf("%d", &N);

    // Using a loop to calculate the sum
    for (int i = 1; i <= N; i++) {
        sum += i;
    }

    // Printing the result
    printf("%d\n", sum);

    return 0;
}
// Your code here...