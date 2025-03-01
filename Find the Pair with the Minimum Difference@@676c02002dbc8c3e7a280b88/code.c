#include <stdio.h>
void sort(int arr[],n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[i]>arr[j]){
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = arr[j];
            }
        }
    }
}
int main() {
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    sort(arr,a);
    int num1,num2,mindiff = 2000;
    for(int i=0;i<a-1;i++){
        for(int j=i+1;j<a;j++){
            if(arr[j]-arr[i]<mindiff){
                mindiff = arr[j]-arr[i];
                num1 = arr[i];
                num2 = arr[j];
            }
        }
    }
    printf("%d %d\n",num1,num2);
    
    return 0;
}