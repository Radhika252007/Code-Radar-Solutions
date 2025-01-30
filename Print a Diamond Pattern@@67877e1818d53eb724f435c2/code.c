#include <stdio.h>

int main() {
    int a,i,j;
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        for(j=a;j>i;j--){
            printf(" ");
        }
        for(int k = 1;k<=(i*2-1);k++){
            printf("*");
        }
        printf("\n");
    }
    for(i=a-1;i>=1;i--){
        for(int j = a-1;j>=1;j--)
{
    printf(" ");
} 
    for(int k = (i*2-1);k>=1;k--){
        printf("*");
    }
    printf("/n");
   }
    return 0;
}