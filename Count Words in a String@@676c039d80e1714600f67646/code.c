// Your code here...
#include <stdio.h>
int main(){
    char str[1000];
    fgets(str,1000,stdin);
    int i=0,j=0;
    while(str[i]==' ')i++;
    while(str[j++]=str[i++]);
    int count = 0;
    for(int k=0;str[k]!='\0';k++){
        if(str[k]==' ' && str[k+1]!=' ' && str[k+1]!='\0'){
            count++;
        }
    }
    if(str[0]!='\0')count++;
    printf("%d",count);
    return 0;
}
