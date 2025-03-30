#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    int freq = 0,ans = 0;
    for(int i=0;i<a;i++){
        if(freq==0){
            ans = arr[i];
        }
        if(ans==arr[i]){
            freq++;
        }
        else{
            freq--;
        }
    }
    int count=0;
    for(int i=0;i<a;i++){
        if(arr[i]==ans){
            count++;
        }
    }
    if(count>a/2){
        printf("%d",ans);
    }
    else{
        printf("%d",-1);
    }
}