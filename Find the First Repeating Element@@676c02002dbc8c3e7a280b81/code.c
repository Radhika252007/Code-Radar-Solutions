#include <stdio.h>


int main() {
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    
    int repeating = arr[0];
    for(int i=1;i<a;i++){
        if(arr[i]==repeating){
            printf("%d\n",repeating);
            break;
        }
        }

    
    return 0;
}