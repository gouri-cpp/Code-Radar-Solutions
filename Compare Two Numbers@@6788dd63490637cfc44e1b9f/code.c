#include <stdio.h>


int main() {
    int i ,j;
    scanf("%d %d",&i,&j);
    if(i>j){
        printf("First");
    }else if(j>i){
        printf("Second");
    } else if (i==j){
        printf("Equal");
    }
    return 0;
}