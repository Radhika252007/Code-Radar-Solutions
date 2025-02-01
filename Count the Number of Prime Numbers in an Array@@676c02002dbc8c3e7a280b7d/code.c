#include <stdio.h>
int isPrime(int a);

int main() {
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    int count =0;
    for(int j=0;j<a;j++){
        if(isPrime(arr[j])){
            count++;
        }
    }
    printf("%d",&count);
    return 0;
}
int isPrime(int a){
    int isPrime = 1;
    if(a<=1){
        return 0;
    }
    for(int i=2;i*i<=a;i++){
        if(a%i==0){
            isPrime=0;
            break;
            }
        }
    
    return isPrime;
    
}