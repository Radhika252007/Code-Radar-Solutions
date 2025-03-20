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
        if(str[i]!=' '&&str[i]!='\0'){
            word[j++]=str[i];
        }
        if((strcmp(word,input)==0)){
            printf("Yes");
            return 0;
        }
    }
    printf("No");
    return 0;
}