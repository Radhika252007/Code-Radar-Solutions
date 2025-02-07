#include <stdio.h>


int main() {
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    for(int j=0;j<a;j++){
    int repeating = arr[j];
    for(int i=1;i<a;i++){
        if(arr[i]==repeating){
            printf("%d",repeating);
            break;
        }
        }
    
    }
    return 0;
}