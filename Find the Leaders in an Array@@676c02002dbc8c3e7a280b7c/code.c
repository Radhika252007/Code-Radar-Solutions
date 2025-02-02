#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    int leader = arr[a-1];
    for(int j= a-2;j>=0;j--){
        if(arr[j]>=leader){
            leader = arr[j];
            printf("%d ",arr[j]);
        }
    }
    return 0;
}