#include <stdio.h>


int main() {
    int a,b;
    char ch;
    scanf("%c",&ch);
    scanf("%d %d",&a ,&b);

    if(ch == '+'){
        printf("%d",a+b);
    }else if (ch == '-'){
        printf("%d",a-b);
    }else if (ch == '*'){
        printf("%d",a*b);
    }else if (ch == '/'){
        printf("%d",a/b);
    }
    return 0;
}