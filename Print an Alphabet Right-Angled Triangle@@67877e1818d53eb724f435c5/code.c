#include <stdio.h>


int main() {
    int a,i,j;
    char ch='A';
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        for(j=0;j<i;j++){
            printf("%c ",ch+j);
            ;
        }
        printf("\n");
    }
    return 0;
}