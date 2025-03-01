#include <stdio.h>
void sort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
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
    if(a==1){
        printf("%d",-1);
        return 0;
    }
    sort(arr,a);
    int num1,num2,mindiff = 2000;
    for(int i=0;i<a;i++){
        if(arr[i+1]-arr[i]<mindiff){
            mindiff = arr[i+1]-arr[i];
            num1 = arr[i];
            num2 = arr[i+1];
        }
    }
    printf("%d %d\n",num1,num2);
    
    return 0;
}