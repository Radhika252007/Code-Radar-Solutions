#include <stdio.h>


int main() {
    int a;
    scanf("%d",&a);
    int b =1;
    for(int i=0;i<a;i++){
        for(int j=0;j<=i;j++){
           if((i%2==0 && j%2!=0)||(i%2!=0 && j%2==0)){
            printf("%d ",0);
           }
           else{
            printf("%d ",1);
           }
        }
        printf("\n");
    }
    return 0;
}