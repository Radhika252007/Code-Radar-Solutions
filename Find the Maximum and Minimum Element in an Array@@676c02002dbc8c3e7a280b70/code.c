#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    int min=arr[0];
    int max=arr[0];
    for(int i=0;i<a;i++){
        if(arr[i]<arr[i-1]){
            min=arr[i];
        }
        if(arr[i]>arr[i-1]){
            max=arr[i];
        }
    }
    printf("%d %d",min,max);
    return 0;
}