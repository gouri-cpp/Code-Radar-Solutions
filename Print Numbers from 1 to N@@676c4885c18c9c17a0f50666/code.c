
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    // Declare i outside the loop
    for(int i = 1; i <= n; i++) {
        printf("%d ", i);  // Print the value of i and separate with space for readability
    }
    
    return 0;
}
