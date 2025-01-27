#include <stdio.h>

int main() {
    int a,b,r;
    char op;
    switch(op){
        case '+':
        r = a+b;
        printf("%d",r);
        break;
        case '-':
        r = a-b;
        printf("%d",r);
        break;
        case '*':
        r = a*b;
        printf("%d",r);
        break;
        case '/':
        if(b==0){
            printf("error");
        else{
            r = a/b;
            printf("%d",r);
            break;
        }
        default:
        printf("error");
        }
    }
    return 0;
}