#include <stdio.h>

int main() {
    int a,b,r;
    char op;
    scanf("%d %d %c",&a,&b,&op);
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
        r = a/b;
        printf("%d",r);
        break;
        default:
        printf("error");
        }
    
    return 0;
}