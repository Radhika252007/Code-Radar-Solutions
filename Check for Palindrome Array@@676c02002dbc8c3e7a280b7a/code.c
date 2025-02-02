#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    int arr[a],temp[a];
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
        temp[i]=arr[i];
    }
    
    for(int j=0;j<(a/2);j++){
        int temp = temp[i];
        temp[i]=temp[a-i-1];
        temp[a-i-1]=temp;
    }
    int ispalindrome = 1;
    for(int k=0;k<a;k++){
    if(temp[i]!=arr[j]){
        ispalindrome=0;
        break;
    }}
    if(ispalindrome){
        printf("YES");    }
    else{
        printf("NO");
    }
    return 0;
}