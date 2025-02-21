// Your code here...
#include <stdio.h>
int main(){
    char str[1000];
    fgets(str,1000,stdio);
    int i=0,j=0;
    while(str[i]==' ')i++;
    while(str[j++]=str[i++]);
    int count = 1;
    for(int k=0;str[k]<='\0';k++){
        if(str[k]==' '){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}