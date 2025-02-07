#include <stdio.h>



int main() {
    char grade;
    scanf("%c",& grade);
    if(ch == 'A'){
        printf("Excellent");
    }else if(ch == 'B'){
        printf("Good");
    }else if(ch == 'C'){
        printf("Average");
    }else if(ch == 'D'){
        printf("Below average");
    }else if(ch == 'F'){
        printf("Fail");
    }else{
        printf("Invalid grade");
    }
    return 0;
}