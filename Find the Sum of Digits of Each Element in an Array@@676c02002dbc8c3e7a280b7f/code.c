#include <stdio.h>

int sumofdigit(int a);
int main() {
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    int result[a];
    for(int j = 0;j<a;j++){
        result[j]=sumofdigit(arr[j]);
    }
    for(int i = 0;i<a;i++){
        printf("%d ",result[i]);
    }
    printf("\n");
    return 0;
}
int sumofdigit(int a){
    int sum = 0;
    while((a>0)||(a<0)){
        if(a<0){
            a = a*(-1);
        }
        sum = sum + a%10;
        a = a/10;
    }
    return sum;
}