#include <stdio.h>


int main() {
    int a,count;
    scanf("%d",&a);
    count = 0;
    while(a!=0){
        a = a>>1;
        if(a&1==1){
            printf("%d",count);
            break;
        }
        count++;
    } 
    

    
    return 0;
}