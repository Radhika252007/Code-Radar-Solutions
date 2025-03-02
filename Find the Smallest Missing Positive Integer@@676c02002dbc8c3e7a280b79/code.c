// Your code here...
#include <stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=1;i>0;i++){
        int present=0;
        for(int j=0;j<N;j++){
            if(arr[j]==i){
                present=1;
            }
        }
        if(!(present)){
            printf("%d",i);
            break;
        }
    }
}