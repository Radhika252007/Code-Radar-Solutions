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
    for(int j=0;j<a;j++){
        arr[j]=arr[j+b];
    }
    for(int k =0;k<a;k++){
        printf("%d\n",arr[k]);
    }
    return 0;
}