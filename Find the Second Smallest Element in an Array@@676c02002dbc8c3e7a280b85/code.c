#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    int min = arr[0];
    for(int i=1;i<a;i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }
    int second_min = 10000;
    for(int i=0;i<a;i++){
        if((arr[i]<second_min)&&(arr[i]>min)){
            second_min=arr[i];
        }
    }
    if(second_min==10000){
        printf("%d",-1);
    }
    else{
        printf("%d",second_min);
    }
    return 0;
}