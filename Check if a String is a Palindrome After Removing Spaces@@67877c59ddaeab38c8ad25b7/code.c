// Your code here...
#include <stdio.h>
#include <string.h>
int main(){
    char str[1000];
    fgets(str,1000,stdin);
    int i=0,j=0;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]!=' '){
            str[j++]=str[i];
        }
    }
    str[j]='\0';
    char temp = str[1000];
    for(int i=0;str[i]!='\0';i++){
        str[j-i-1]=str[i];
    }
    if(temp==str){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}