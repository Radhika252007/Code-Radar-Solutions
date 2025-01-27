#include <stdio.h>


int main() {
    int a,i,j;
    scanf("%d",&a);
    for(i=;i<=a;i++){
        for(j=1;j<=i;j--){
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}