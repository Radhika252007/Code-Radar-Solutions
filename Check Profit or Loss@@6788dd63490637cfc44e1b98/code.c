#include <stdio.h>

int main() {
    int cp,sp,diff;
    scanf("%d %d",&cp,&sp);
    diff = sp - cp;
    if(diff>0){
        printf("Profit");
    }
    else if(diff<0){
        printf("Loss");
    }
    else{
        printf("No Profit No Loss");
    }
    return 0;
}