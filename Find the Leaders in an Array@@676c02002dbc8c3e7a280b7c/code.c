#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    int arr[a],result[a];
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    int leader = arr[a-1];
    int count = 0;
    result[count++]=leader;
    for(int j= a-2;j>=0;j--){
        if(arr[j]>=leader){
            leader = arr[j];
            result[count++]=leader;
        }
    }
    for(int i = count-1;i>=0;i--){
        printf("%d ",result[i]);
    }
    return 0;
}