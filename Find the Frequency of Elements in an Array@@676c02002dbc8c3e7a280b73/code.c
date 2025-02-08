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
        if(freq[i]==-1){
            int count=1;
            for(int j=1;j<a;j++){
                if(arr[i]==arr[j]){
                    count++;
                    freq[j]=0;

                }
            }
    freq[i]=count;
    }}
    for(int i=0;i<a;i++){
        if(freq[i]>0){
            printf("%d %d\n",arr[i],freq[i]);
        }
    }

    return 0;
}