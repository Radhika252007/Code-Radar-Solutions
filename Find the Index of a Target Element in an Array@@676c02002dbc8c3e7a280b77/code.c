#include <stdio.h>


int main() {
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i =0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    int b;
    scanf("%d",&a);
    int result = -1;
    for(int j = 0;j<a;j++){
        if(arr[j]==b){
            result = j;
            break;
        }
    }
    printf("%d",result);
    return 0;
}