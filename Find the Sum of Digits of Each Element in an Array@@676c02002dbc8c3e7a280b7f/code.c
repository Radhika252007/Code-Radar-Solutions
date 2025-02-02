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
    return 0;
}
int sumofdigit(int a){
    int sum = 0;
    int b;
    while(a>0){
        b = a%10;
        a = a/10
        sum = sum + b;
    }
    return sum;
}