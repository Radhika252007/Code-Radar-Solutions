#include <stdio.h>


int main() {
    int a;
    scanf("%d",&a);
    int b =1;
    for(int i=0;i<a;i++){
        for(int j=0;j<a;j++){
           printf("%d ",b);
           if(b==1){
            b =0;
           }
           else{
            b =1;
           }
        }
        printf("\n");
    }
    return 0;
}