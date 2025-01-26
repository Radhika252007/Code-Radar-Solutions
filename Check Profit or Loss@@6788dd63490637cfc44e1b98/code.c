#include <stdio.h>

int main() {
    int cp,sp;
    scanf("%d %d",&c0,&sp);
    diff = sp-cp;
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