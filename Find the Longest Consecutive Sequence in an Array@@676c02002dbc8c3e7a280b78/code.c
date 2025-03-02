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
    // for(int i=arr[0];;i++){
    //     int present = 0;
    //     for(int j=0;j<N;j++){
    //         if((arr[j]==i)&&(arr[j]!=arr[j+1])){
    //             present=1;
    //             count++;
    //         }
    //     }
    //     if(!(present)){
    //         printf("%d",count);
    //         break;
    //     }
    // }
    for(int i=1;i<N;i++){
        if((arr[i]==arr[i-1]+1)&&(arr[i]!=arr[i-1])){
            count++;
        }
    }
    printf("%d",count);
    return 0;
    
}