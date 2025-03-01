#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    int mindiff = 200;
    int diff;
    if(a==1){
        printf("%d",-1);
    }
    for(int j=0;j<a-1;j++){
        for(int k=j+1;k<a;k++){
           if(arr[j]>arr[k]){
            diff = arr[j]-arr[k];
           }
           else{
            diff = arr[k]-arr[j];
           }
           if(diff<mindiff){
            mindiff=diff;
           }
           }
        }
    
    for(int k=0;k<a-1;k++){
        for(int i=1;i<a;i++){
            if(arr[i]>arr[k]){
                if(arr[i]-arr[k]==mindiff){
                    printf("%d %d\n",arr[k],arr[i]);
                    return 0;
                }
            }
            if(arr[k]>arr[i]){
                if(arr[k]-arr[i]==mindiff){
                    printf("%d %d\n",arr[i],arr[k]);
                    return 0;
                }
            }
            }
        }
    
    return 0;
}