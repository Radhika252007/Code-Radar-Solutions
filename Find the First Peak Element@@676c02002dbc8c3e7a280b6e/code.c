#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    
    for(int j=0;j<a;j++){
        if(j==0){
            if(arr[j]>arr[j+1]){
                printf("%d",arr[j]);
                return 0;
            }}
        else if(j==a-1){
            if(arr[j]>arr[j-1]){
                printf("%d",arr[j]);
                return 0;
            }
        }
        else if(j>0 && j<a-1){
        if((arr[j]>arr[j-1])&&(arr[j]>arr[j+1])){
            printf("%d",arr[j]);
            return 0;
        }}
        
        
    }
    printf("%d",-1);
    return 0;
}