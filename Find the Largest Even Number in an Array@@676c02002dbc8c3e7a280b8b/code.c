#include <stdio.h>
int isprime(int a);

int main() {
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    int result = -1;
    for(int j=0;j<a;j++){
        if(isprime(arr[j])){
            result = arr[j];
        }
    }
    printf("%d",result);
    return 0;
}
int isprime(int a){
    prime=1;
    for(int i=0;i*i<=a;i++){
        if(a%i==0){
            prime=0;
            break;
        }
    }
    return prime;
}