#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    int arr[a];
    for(i=1;i<=a;i++){
        scanf("%d",&arr[i]);
    }
    int isSorted=1;
    for(i=1;i<a;i++){
        if(arr[i]<arr[i-1]){
            isSorted=0;
            break;
        }
    }
    if(isSorted){
        printf("Sorted");
    }
    else{
        printf("Not Sorted");
    }
    return 0;
}