#include <stdio.h>
int iseven(int a);

int main() {
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    int result = -1;
    for(int j=0;j<a;j++){
        if(iseven(arr[j])){
            result = arr[j];
        }
    }
    printf("%d",result);
    return 0;
}
int iseven(int a){
    if(a%2==0){
        return 1;
    }
    return 0;
}