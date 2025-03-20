#include <stdio.h>
#include <string.h>
int main(){
    char str[200];
    char input[60];
    fgets(str,200,stdin);
    fgets(input,60,stdin);
    char word[60];
    int len = strlen(str);
    for(int i=0,j=0;i<len;i++){
        while(str[i]!=' '){
            word[j++]=str[i];
        }
        if((strcmp(word,input)==0)){
            printf("Yes");
            break;
        }
    }
}