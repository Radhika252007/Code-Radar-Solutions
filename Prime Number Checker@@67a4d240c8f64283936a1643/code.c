#include <stdio.h>
int isPrime(int a);

// int main() {
//     int t;
//     scanf("%d",&t);
//     while(t--){
//         int num;
//         scanf("%d",&num);
//         printf("%d\n",isPrime(num));
//     }
//     return 0;
// }
int isPrime(int a){
    if(a<=1){
        return 0;
    }
    for(int i=2;i*i<=a;i++){
        if(a%i==0){
            return 0;
        }
    }
    return 1;
}