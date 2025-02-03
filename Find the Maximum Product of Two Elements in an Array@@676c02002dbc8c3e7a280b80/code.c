#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    int maxproduct=0;
    for(int i=0;i<a-1;i++){
        for(int j=1;j<a;j++){
            if((arr[i]*arr[j])>maxproduct){
                maxproduct=arr[i]*arr[j];
            }
        }
    }
    printf("%d",maxproduct);
    return 0;
}