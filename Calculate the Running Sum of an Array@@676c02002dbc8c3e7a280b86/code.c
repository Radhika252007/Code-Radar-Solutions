#include <stdio.h>

int main(){
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    int result[0]=arr[0];
    for(int i=1;i<a;i++){
        result[i] = result[i-1]+arr[i];
    }
    for(int k = 0;k<a;k++){
        printf("%d ",result[k]);
    }
    return 0;
}