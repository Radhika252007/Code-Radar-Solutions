#include <stdio.h>


int main() {
    int a,i,j;
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        for(j=i;j<=i;j++){
            printf("%d ",j);
            j = j+1;
        }
    }
    return 0;
}