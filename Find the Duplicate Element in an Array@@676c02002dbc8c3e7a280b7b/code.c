#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    int duplicate = arr[0];
    int count =0;
    for(int j=1;j<a;j++){
        if(arr[j]==duplicate){
            duplicate= arr[j];
            count++;
        }
    }
    if(count>0){
        printf("%d",duplicate);
    }
    return 0;
}