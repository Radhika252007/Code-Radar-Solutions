#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    int arr1[100];
    int count=0;
    for(int i=0;i<a;i++){
        if(arr[i]!=0){
            arr1[count]=arr[i];
            count++;
        }
    }
    for(int j=0;j<a;j++){
        if(arr[j]==0){
            arr1[count]=arr[j];
            count++;
        }
    }
    for(int k=0;k<a;k++){
        printf("%d ",arr1[k]);
    }
    return 0;
}