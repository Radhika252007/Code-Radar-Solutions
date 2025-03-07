// Your code here...
void fibonacciSeries(int n);
void fibonacciSeries(int n){
    int a =0,b=1;
    if(n==1){
        printf("%d",0);
    }
    for(int i=2;i<=n;i++){
        int temp = b;
        b += a;
        a = temp;
        printf("%d ",b);
    }
}