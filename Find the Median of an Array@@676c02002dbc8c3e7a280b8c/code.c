#include <stdio.h>


int main() {
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    int b=a/2;
    if(a%2==0){
        int result = (arr[b]+arr[b-1])/2;
        printf("%d",result);
    }
    else{
        int result = arr[(a+1)/2];
        printf("%d",result);
    }
    return 0;
}