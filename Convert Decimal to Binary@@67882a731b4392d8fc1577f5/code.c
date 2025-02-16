#include <stdio.h>

int main() {
    // int a,b;
    // scanf("%d",&a);
    // int i=0;
    // b = a;
    // int arr[50];
    // while(a>0){
    //     if(a%2==0){
    //         arr[i]=0;
    //     }
    //     else{
    //         arr[i]=1;
    //     }
    //     a = a/2;
    //     i++;
    // }
    // if(b==0){
    //     printf("%d",0);
    // }
    // else{
    //     for(int j=i-1;j>=0;j--){
    //         printf("%d",arr[j]);
    //     }
    // }
    int num,flag=0;
    scanf("%d",&num);
    for(int i=31;i>=0;i--){
        if(num&(1<<i)){
            flag=1;
        }
        if(flag){
            printf("%d",(num>>i)&1);
        }
    }
    return 0;
}