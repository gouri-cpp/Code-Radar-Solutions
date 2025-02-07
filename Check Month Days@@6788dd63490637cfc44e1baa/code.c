#include <stdio.h>


int main() {
    int i;
    scanf("%d", &i);
    if (i == 1){
        printf("%d",31);
    }else if (i == 2){
        printf("%d",28);
    }else if (i == 3){
        printf("%d",31);
    }else if (i == 4){
        printf("%d",30);
    }else if (i == 5){
        printf("%d",31);
    }else if (i == 6){
        printf("%d",30);
    }else if (i == 7){
        printf("%d",31);
    }else if (i == 8){
        printf("%d",31);
    }else if (i == 9){
        printf("%d",30);
    }else if (i == 10){
        printf("%d",31);
    }else if (i == 11){
        printf("%d",30);
    }else if (i == 12){
        printf("%d",31);
    }else{
        printf("Invalid");
    }
    printf("%s", welcome());
    return 0;
}