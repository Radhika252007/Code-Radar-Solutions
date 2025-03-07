// Your code here...
void fibonacciSeries(int n);
void fibonacciSeries(int n){
    int a =0,b=1;
    for(int i=1;i<=n;i++){
        temp = b;
        b += a;
        a = temp;
        printf("%d ",b);
    }
}