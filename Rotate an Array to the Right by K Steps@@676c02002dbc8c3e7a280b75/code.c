// Your code here...
#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    int rotate;
    for(int j=0;j<rotate;j++){
        int temp = arr[a-1];
        for(int i = a-2;i>=0;i--){
            arr[i+1]=arr[i];
        }
        arr[0]=temp;
    }
    for(int i=0;i<a;i++){
        printf("%d ",arr[i]);
    }
}