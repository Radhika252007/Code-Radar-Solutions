#include <stdio.h>
void sort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
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
    int b;
    scanf("%d",&b);
    sort(arr,a);
    int i =0,j=a-1;
    while(i<j){
        if(arr[i]+arr[j]==b){
            printf("%d %d\n",arr[i],arr[j]);
            while(i < j && arr[i] == arr[i + 1]) i++;
            while(i < j && arr[j] == arr[j - 1]) j--;
            i++;
            j--;
        }
        else if(arr[i]+arr[j]<b){
            j--;
        }
        else{
            i++;
        } 
    }
    
    return 0;
}