#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    if(a==1){
        printf("%d",-1);
        return 0;
    }
    int max,sec_max;
    if(arr[0]>arr[1]){
        max = arr[0];
        sec_max = arr[1];
    }
    else{
        max = arr[1];
        sec_max = arr[0];
    }
    for(int i=2;i<a;i++){
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