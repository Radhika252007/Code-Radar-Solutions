// Your code here...
#include <stdio.h>
void sort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    sort(arr,N);
    int count = 0;
    for(int i=arr[0];;i++){
        int present = 0;
        for(int j=0;j<N;j++){
            if(arr[j]==i){
                present=1;
                count++;
            }
        }
        if(!(present)){
            printf("%d",count);
            break;
        }
    }
    return 0;
    
}