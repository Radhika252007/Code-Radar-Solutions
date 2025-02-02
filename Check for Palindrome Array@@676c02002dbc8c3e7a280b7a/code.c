#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    int arr[a],temp[a];
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
        temp[i]=arr[i];
    }
    
    for(int j=0;j<a/2;j++){
        int tempVal = temp[j];
        temp[j]=temp[a-j-1];
        temp[a-j-1]=tempVal;
    }
    int ispalindrome = 1;
    for(int k=0;k<a;k++){
    if(temp[k]!=arr[k]){
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