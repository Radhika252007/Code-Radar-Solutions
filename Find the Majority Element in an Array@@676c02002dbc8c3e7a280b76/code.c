#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    int freq = 1,ans = 0;
    for(int i=0;i<n;i++){
        if(freq==1){
            ans = arr[i];
        }
        if(ans==arr[i]){
            freq++;
        }
        else{
            freq--;
        }
    }
    if(freq>n/2){
        return ans;
    }
    else{
        return -1;
    }
}