#include <stdio.h>


int main() {
    int a;
    scanf("%d",&a);
    int arr[a];
    int arr1[100];
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    int count =0;
    for(int i=0;i<a-1;i++){
        for(int j=1;j<a;j++){
            if(arr[i]==arr[j]&&i!=k){
                arr1[count]=arr[k];
                count++;
            }
        }
        }
    if(arr1[0]>100000||arr1[0]< -100000){
        arr1[0]=-1;
    }
    else{
        printf("%d",arr1[0]);
    }

    
    return 0;
}