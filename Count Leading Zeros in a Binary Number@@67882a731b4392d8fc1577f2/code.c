#include <stdio.h>


int main() {
    int a,count,b;
    scanf("%d",&a);
    b = 1<<31;
    count = 0;
    while(a!=0){
        if(a&b==1){
            break;
        }
        a = a<<1;
        count++
    }
    printf("%d",count);
    return 0;
}