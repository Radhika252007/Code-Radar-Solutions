#include <stdio.h>


int main() {
    int a,count;
    scanf("%d",&a);
    count = 0;
    while(a&1==0){
        a = a>>1;
        if(a&1==1){
            printf("%d",count);
        }
        break;
        count = count +1;
    } 
    

    
    return 0;
}