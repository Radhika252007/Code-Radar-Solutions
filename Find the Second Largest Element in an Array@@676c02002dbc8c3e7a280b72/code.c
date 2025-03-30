#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    int max = arr[0],sec_max = arr[0];
    for(int i=0;i<a;i++){
        if(arr[i]>max){
            sec_max = max;
            max = arr[i];
        }
        else if(arr[i]>sec_max&&arr[i]!=max){
            sec_max = arr[i];
        }
    }
    if(max==sec_max){
        printf("%d",-1);
    }
    else{
        printf("%d",sec_max);
    }
    return 0;
}