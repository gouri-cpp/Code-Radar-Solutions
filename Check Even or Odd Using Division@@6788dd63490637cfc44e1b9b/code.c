#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int i;
    scanf("%d",&i);
    if(i%2==0){
        printf("Even");
    }else {
        printf("Odd");
   
    }
    return 0;
} 