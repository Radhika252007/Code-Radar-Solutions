#include <stdio.h>

int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    int count =0;
    for(int j=0;j<a;j++){
        if(arr[j]>b){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}