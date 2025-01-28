#include <stdio.h>

int main() {
    int a,i,r;
    scanf("%d",&a);
    for(i=1;i<=10;i++){
        r=a*i;
        printf("%d X %d = %d",a,i,r);
    }
    return 0;
}