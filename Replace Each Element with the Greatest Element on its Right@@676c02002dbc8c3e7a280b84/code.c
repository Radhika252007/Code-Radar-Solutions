#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    int max=arr[a-1];
    for(int i=a-2;i>=0;i--){
        if(arr[i]<=max){
            arr[i]=max;
        }
        else{
            max =arr[i];
        }
    }
    arr[a-1]=-1;
    for(int i=0;i<a;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}