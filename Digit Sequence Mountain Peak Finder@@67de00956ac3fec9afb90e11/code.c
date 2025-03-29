#include <stdlib.h>
int mountainPeak(int n){
    char n_str[30];
    int len = sprintf(n_str,"%d",n);
    if(len%2==0){
        return -1;
    }
    int i =0;j=len-1;
    while(i<=j){
        if(n_str[i]!=n_str[j]){
            return -1;
        }
        else{
            i++;
            j--;
        }
    }
    char res = n_str[i];
    return atoi(res);
}