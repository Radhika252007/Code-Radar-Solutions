#include <stdio.h>


int main() {
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    
    for(int j=1;j<a-1;j++){
        if((arr[j]>arr[j-1])&&(arr[j]>arr[j+1])){
            printf("%d",arr[j]);
            break;
        }
    }
    return 0;
}