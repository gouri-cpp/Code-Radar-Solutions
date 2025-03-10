#include <stdio.h>

int main() {
    int N;
    
    // Taking input
    // printf("Enter a number: ");
    scanf("%d", &N);
    
    // Printing multiplication table from 1 to 10
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", N, i, N * i);
    }
    
    return 0;
}
// Your code here...