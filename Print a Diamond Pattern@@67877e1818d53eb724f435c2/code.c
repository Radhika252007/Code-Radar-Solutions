#include <stdio.h>

int main() {
    int a,i,j;
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        for(j=1;j<=a-i;j++)
        {
            printf(" ");
        }
        for(int k =1;k<=2*i-1;k++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(i=n-1;i>=1;i--){
        for(j=1;j<=a-i;j++)
        {
            printf(" ");
        }
        for(int k = 1;k<=2*i-1;k++)
        {
            printf("*");
        }
        printf("/n");
    }
    
    return 0;
}