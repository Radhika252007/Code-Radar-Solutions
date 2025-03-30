#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }

    int result = -1;
    for(int j=0;j<a;j++){
        if(arr[j]%2==0){
            if(arr[j]>result||result = -1){
                result=arr[j];
            }
        }
    }
    printf("%d",result);
    return 0;
}
