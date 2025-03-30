#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    int arr[a],freq[a];
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
        freq[i]=1;
    }
    int max = 0,index = 0;
    for(int i=0;i<a;i++){
        if(freq[i]==1){
            for(int j=i+1;j<a;j++){
                if(arr[i]==arr[j]){
                    freq[i]++;
                    freq[j]=0;
                }
            }
        }
        if(freq[i]>0 && freq[i]>max){
            max = freq[i];
            index = i;
            }
    }
    printf("%d",arr[index]);
    return 0;
}