#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    int isIncreasing = 1,isDecreasing =1;
    for(int i=0;i<a-1;i++){
        if(arr[i]<arr[i+1]){
            isDecreasing=0;
        }
        if(arr[i]>arr[i+1]){
            isIncreasing=0;
        }
    }

    if((isDecreasing)||(a==1)||(isIncreasing)){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}