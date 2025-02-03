#include <stdio.h>


int main() {
    int a,i,j,y=1;
    scanf("%d",&a);
    for(int i = 0;i<a;i++){
        j = 0;
        while(i>=j){
            printf("%d ",y);
            y++;
        }
        j++;
    }
    return 0;
}