#include <stdio.h>

int main() {
    int a,i,j;
    scanf("%d",&a);
    for(i=5;i>=1;i--){
        for(j=1;j<=i;j++){
            printf("%c ",'A'+a-i);
        }
        printf("\n");
    }
    return 0;
}