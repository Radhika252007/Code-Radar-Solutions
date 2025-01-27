#include <stdio.h>


int main() {
    int a,i,result=1;
    scanf("%d",&a);
    if(a>1){
        for(i=2;i*i<=a;i++){
            if(a%i==0){
                result=0;
                break;
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