#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    int arr[a],freq[a];
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
        freq[i]=-1;
    }
    for(int i=0;i<a;i++){
        if(freq[i]=-1){
            int count =1;
            for(int j=i+1;j<a;j++){
                if(arr[i]==arr[j]){
                    count ++;
                    freq[j]=0;
                }
            }
            freq[i]=count;
        }
    }
    int k=0;
    int max = freq[0];
    for(int i=0;i<a;i++){
        if(freq[i]>max){
            max=freq[i];
            k =i;
        }
    }
    printf("%d",arr[k]);
    return 0;
}