
int mountainPeak(int n){
    char n_str[30];
    int len = sprintf(n_str,"%d",n);
    if(len%2==0){
        return -1;
    }
    int i =0,j=len-1;
    while(i<=j){
        if(n_str[i]!=n_str[j] && n_str[i]<=n_str[i+1]){
            return -1;
        }
        else{
            i++;
            j--;
        }
    }
    int res = n_str[i]-'0'+1;
    return res;
}