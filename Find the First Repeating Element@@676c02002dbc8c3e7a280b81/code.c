#include <stdio.h>


int main() {
    int a;
    scanf("%d",&a);
    int arr[a];
    int arr1[100];
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    int arr1[0] = -1;
    int count =0;
    for(int i=0;i<a-1;i++){
        for(int j=1;j<a;j++){
            if(arr[i]==arr[j]&&i!=j){
                arr1[count]=arr[i];
                count++;
            }
        }
        }
    
    printf("%d",arr1[0]);
    

    
    return 0;
}