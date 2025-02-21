// Your code here...
#include <stdio.h>
int main(){
    char str[1000];
    fgets(str,1000,stdin);
    int count = 0;
    for(int k=0;str[k]!='\0';k++){
        if(str[k]==' ' && str[k+1]!=' ' && str[k+1]!='\0'){
            count++;
        }
    }
    if(str[0]!='\0'&& str[0]!=' ')count++;
    printf("%d",count);
    return 0;
}
