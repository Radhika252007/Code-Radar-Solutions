// Your code here...
void fibonacciSeries(int n);
void fibonacciSeries(int n){
    int a =0,b=1;
    printf("%d %d ",a,b);
    int temp = a+b;
    for(int i=3;i<=n;i++){
        printf("%d ",temp);
        a =b;
        b = temp;
        temp = a+b;  
    }
}