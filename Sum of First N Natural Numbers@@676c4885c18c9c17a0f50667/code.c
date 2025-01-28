#include <stdio.h>


int main() {
    int a,i,sum;
    scanf("%d",&a);
    sum=0;
    for(i=1;i<=a;i++){
        sum = sum + i;
    }
    printf("%d",sum);
    return 0;
}