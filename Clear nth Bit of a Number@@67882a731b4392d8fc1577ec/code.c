#include <stdio.h>

int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    a = a>>b;
    a = a&0;
    a =a<<b;
    printf("%d",a);
    return 0;
}