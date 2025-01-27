#include <stdio.h>


int main() {
    int a,i,result=1;
    scanf("%d",&a);
    if(a>1){
        for(i=2;i*i<=a,i++){
            if(n%i==0){
                result=0;
            }
        }
    }
    if(result){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
    return 0;
}