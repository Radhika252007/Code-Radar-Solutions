#include <stdio.h>
int main() {
    int a,i,j;
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        for(j=1;j<=n;j++){
            if(i==1||i==n||j==1||j==n){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
    }
    return 0;
}