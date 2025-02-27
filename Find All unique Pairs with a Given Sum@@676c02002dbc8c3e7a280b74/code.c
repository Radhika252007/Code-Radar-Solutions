#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    int b;
    scanf("%d",&b);
    for(int i=0;i<a-1;i++){
        for(int j=1+i;j<a;j++){
            if(arr[i]+arr[j]==b){
                printf("%d %d\n",arr[i],arr[j]);
                continue;
            }
        }
    }
    return 0;
}