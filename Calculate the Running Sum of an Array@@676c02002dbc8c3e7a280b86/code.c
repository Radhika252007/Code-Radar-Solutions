#include <stdio.h>

int main() {
    int a;
    scanf("5d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    int arr2[];
    int count = 0;
    for(int i=0;i<a-1;i++){
        for(int j = 1;j<a;j++){
            arr2[count]=arr[i]+arr[j];
            count++;
        }
    }
    for(int k = 0;k<count-1;k++){
        printf("%d ",arr[k]);
    }
    return 0;
}