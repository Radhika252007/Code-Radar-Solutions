// Your code here...
void factorialRange(int start, int end){
    for(int i=start;i<=end;i++){
        if(i==0){
            printf("%d\n",1);
        }
        int fact = 1;
        for(int j=1;j<i;j++){
            fact*=j;
        }
        printf("%d\n",fact);
    }
}