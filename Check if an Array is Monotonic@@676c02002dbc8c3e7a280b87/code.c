#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    int monotonic = 0;
    for(int i=0;i<a-1;i++){
        for(int j=1;j<a;j++){
            if((arr[i]<arr[j])||(arr[i]>arr[j])){
                monotonic=1;
            }
        }
    }
    if(monotonic){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}