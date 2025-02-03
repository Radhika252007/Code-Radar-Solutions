#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    int max = arr[0];
    for(int i=0;i<a;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    int second_max = arr[0];
    for(int j=0;j<a;j++){
        if((arr[j]>second_max) && (arr[j]<max)){
            second_max = arr[j];
        }
    }
    printf("%d",second_max);
    return 0;
}