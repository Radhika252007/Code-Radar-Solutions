// Your code here...
int isPrime(int n){
    if(n<=1){
        return 0;
    }
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}
void printPrimesInRange(int a,int b){
    int prime=1;
    for(int i=a;i<=b;i++){
        if(isPrime(i)){
            printf("%d ",i);
            prime=0;
        }
    }
    if(prime){
        printf("No prime numbers");
    }
}
