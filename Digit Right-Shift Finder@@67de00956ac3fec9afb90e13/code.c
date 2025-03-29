#include <stdlib.h>
int digitRightShift(int n){
    char n_str[50];
    int len = sprintf(n_str,"%d",n);
    char temp = n_str[len-1];
    for(int i=len-2;i>=0;i--){
        n_str[i+1]=n_str[i];
    }
    n_str[0]=temp;
    return atoi(n_str);
}