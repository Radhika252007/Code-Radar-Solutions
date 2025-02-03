#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    int sum = arr[0];
    int count = 0;
    int result[count++]=sum;
    for(int i=0;i<a-1;i++){
        for(int j = 1;j<a;j++){
            result[count++]=arr[i]+arr[j];
        }
    }
    for(int k = 0;k<count-1;k++){
        printf("%d ",result[k]);
    }
    return 0;
}