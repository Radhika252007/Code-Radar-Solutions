// Your code here...
#include <stdio.h>
#include <string.h>
int main(){
    char str[1000];
    fgets(str,1000,stdin);
    int len = strlen(str);
    for(int i=0;i<len;i++){
        int count =1;
        for(int j=i+1;j<len;j++){
            if((str[i]==str[j])&&(str[i]!='0')&&(i!=j)){
                str[j]='0';
                count++;
            }
        }
        printf("%c: %d\n",str[i],count);
        count =1;
    }
    return 0;
}
