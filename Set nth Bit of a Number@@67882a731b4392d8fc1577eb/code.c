#include <stdio.h>


int main() {
    int a,b,c=1;
    scanf("%d %d",&a,&b);
    for(i=0;i<b;i++){
        c = c*2;
    }
    printf("%d",a|c);
        return 0;
}