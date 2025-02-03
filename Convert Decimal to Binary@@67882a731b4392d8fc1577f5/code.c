#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    for(int i=0;i<=a;i++):
        int j=(1<<i)&a;
        printf("%d",j);
    return 0;
}