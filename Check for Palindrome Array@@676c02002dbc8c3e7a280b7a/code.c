#include <stdio.h>


int main() {
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    int temp[a]=arr[a];
    for(int j=0;j<(a/2);j++){
        int firstVal = temp[i];
        int secondVal = temp[n-i-1];
        temp[n-i-1]=firstVal;
        temp[i]=secondVal;
        secondVal= temp[i];

    }
    if(temp[a]==arr[a]){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}